[cpp06.en.subject.pdf](https://cdn.intra.42.fr/pdf/pdf/35951/en.subject.pdf)

# CPP06: C++ Casts [ref](https://www.cplusplus.com/articles/iG3hAqkS/)

## 4 of Casting Operators in C++

### `static_cast`

- 형식: `static_cast<type>(expression);`
- 예시
    
    ```cpp
    float fVariable = static_cast<float>(iVariable); 
    /*This statement converts iVariable which is of type int to float. */
    ```
    
- expression을 type 형으로 변환하겠다는것.
- ~~It will convert between built-in types, even when there is a loss of precision. In addition, the static_cast operator can also convert between **related** pointer types.~~
    
    ~~같은 형의 포인터의 경우에 캐스팅이 가능~~
    
    ```cpp
    int* pToInt = &iVariable;
    float* pToFloat = &fVariable;
    
    float* pResult = static_cast<float*>(pToInt); 
    //This will not work as the pointers are not related (they are of different types).
    ```
    

### `const_cast`

- 형식: `const_cast<type>(expression);`
- 예시
    
    ```cpp
    void aFunction(int* a)
    {
        cout << *a << endl;
    }
    
    int main()
    {
        int a = 10;
        const int* iVariable = &a;
        
        aFunction(const_cast<int*>(iVariable)); 
    /*Since the function designer did not specify the parameter as const int*, we can strip the const-ness of the pointer iVariable to pass it into the function. 
    Make sure that the function will not modify the value. */
    
        return 0;
    }
    ```
    
- 드물게 사용됨.
- 다른 형끼리의 캐스팅이 아닌, const 상수화를 푸는 캐스팅. non-const로 만들어 바꿀 수 있는 상태가 된다. ~~이게 쓰인다는 건 설계가 이상한거니까 다시 짜라.~~

### `reinterpret_cast`

- 형식: `reinterpret_cast<type>(expression);`
- 가장 강력한 캐스팅.
- built-in 타입부터 아무 다른 타입까지 변환이 가능하다.
- 아무 포인터에서 다른 포인터타입으로도 가능.
- 하지만 const나 volatile을 풀어주는 건 아님.
- 빌트인 데이터 타입과 포인터들을 강제적으로 변환할 수 있다 (타입 안전성이나 상수여부와 관련 없이)
- 꼭 필요할 때 쓰여야 한다.

### `dynamic_cast` [ref](https://en.cppreference.com/w/cpp/language/dynamic_cast)

- [dynamic_cast with references](https://www.ibm.com/docs/en/i/7.2?topic=operator-dynamic-casts-references)
- [dynamic_cast operator (IBM)](https://www.ibm.com/docs/en/i/7.2?topic=rtti-dynamic-cast-operator)
- 동적 캐스팅은 포인터와 객체 참조자에만 쓰일 수 있다. (pointers and references to objects)
    - 포인터: 성공시 포인터, 실패시 null
    - 참조자: A failing dynamic cast to a reference type throws a **bad_cast** exception. exception을 던짐.
- dynamic_cast는 항상 성공적으로 동작한다. (한 클래스 객체를 부모클래스타입으로 캐스팅할 경우)

```cpp
class CBase { };
class CDerived: public CBase { };

CBase b; CBase* pb;
CDerived d; CDerived* pd;

pb = dynamic_cast<CBase*>(&d);     // ok: derived-to-base
pd = dynamic_cast<CDerived*>(&b);  // wrong: base-to-derived
```

- 안전한 캐스팅
- 런타임 시점에 캐스팅을 진행하고, 성공시 주소값을, 실패시 nullptr을 반환한다.
- 객체 포인터간의 형 변환만 가능하며,
- virtual 키워드가 단 하나라도 존재하는 상속관계에서만 가능하다 (virtual function table 참조하기 떄문)

# ex00: Scalar conversion

(static_cast 관련)

## Scalar type

- an object of integer type including booleans and enumerated types, floating type including complex and imaginary, and pointer type including pointer to function
- char, int, float, double, enum, void, pointer type이 있다.
- 우리가 이제껏 써온, 단일 데이터 요소를 가지는 타입을 말함.
- [ref](http://ee.hawaii.edu/~tep/EE160/Book/chap5/section2.1.3.html)

## 과제 요구 정리

- string을 인자로 받는 프로그램을 작성해라.
- 이 string 내용은 `char, int, float, double` 중 하나여야 한다. (10진법만 쓸것임)
- 상세 요구
    - char: non-displayable character은 비정상 입력으로 간주하여 경고를 뱉어라.
    - float: 0.0f, -4.2f, 4.0. ... + pseudo literals `-inff`, `+inff`, `nanf` 도 인자로 받아야 함
    - double: 0.0, -4.2, 4.2 + pseudo literals `-inf`, `+inf`, `nan`
- 프로그램은 문자열이 어떤 타입인 지 탐지하여 해당 타입으로 저장하고, 이를 나머지 세 타입으로 변환하여 아래 형식으로 출력해야 한다. 만약 변환이 불가능하거나, overflow라면 ‘impossible’이라 출력해라.
- 헤더는 자유롭게 추가하여 사용 가능. (to handle numeric limits and special values)

![image](https://user-images.githubusercontent.com/75327385/149872178-38872abf-d25b-4a87-9dde-1aee6c475296.png)


## inf 와 nan

[ref](https://stackoverflow.com/questions/17628613/what-is-inf-and-nan)

### inf

- infinity, 무한대
- a value that is greater than any other value.
- `-inf` is therefore smaller than any other value.

### nan

- not a number, 수학적인 정의가 불가능하다는 의미
- a value that you get if you perform a calculation whose result can't be expressed as a number. Any calculations you perform with `NaN` will also result in `NaN`.
- If you try to do a computation that just doesn't make sense, you get `NaN`
- Usually `NaN` is used to just mean that some data is missing.

## 범위 설정

- <limits> 사용 [ref](https://www.cplusplus.com/reference/limits/numeric_limits/)
    - INT_MIN 과 같이 사용하면 됨
- 참고
    - `char` 0~127
    - `int` –2,147,483,648 ~ 2,147,483,647
    - `float` 3.4E-38(-3.4*10^38) ~ 3.4E+38(3.4*10^38) (7digits)
    - `double` 1.79E-308(-1.79*10^308) ~ 1.79E+308(1.79*10^308) (15digits)

### float과 double

C 언어에서 실수를 처리하기 위해 [부동소수점](https://ko.wikipedia.org/wiki/%EB%B6%80%EB%8F%99%EC%86%8C%EC%88%98%EC%A0%90)(Float-Point) 방식을 사용한다. 이것은 국제표준 [IEEE 754](https://ko.wikipedia.org/wiki/IEEE_754) 규격에 따른다.

- float : 단정밀도(single precision) 32비트
- double : 배정밀도(double precision) 64비트
- float 형은 숫자 끝에 f을 붙여 32비트 단정밀도에 따른 숫자임을 나타낸다. 통상 f 없이 사용하면 double형 숫자이다.
- 유효자릿수
    
    ```
    float frnum = 3.141593f;
    double drnum = 3.141592653589793;
    ```
    
    - 여기서 유효 자리 개수를 생각할 때, float는 7자리의 유횻값을 갖는다. double은 16개의 자리의 숫자를 저장할 수 있다.

# ex01: Serialization

(reinterpret_cast 관련)

### 과제 요구사항

- Data 구조체
- `uintptr_t serialize(Data *ptr);`
- `Data *deserialize(uintptr_t raw);`

## uintptr_t

- 포인터 데이터 타입 (unsigned int 포인터)
- unsigned integer type capable of holding a pointer to void
- The following type designates an unsigned integer type with the property that any valid pointer to **void** can be converted to this type, then converted back to a pointer to **void**, and the result will compare equal to the original pointer

### Implicit conversion 묵시적 형변환

- 컴파일러에 의해 자동적으로 캐스팅되는 경우
- 예시
    
    ```cpp
    int iVariable = 10;
    float fVariable = iVariable;
    ```
    

### Explicit conversion 명시적 형변환

- 프로그래머에 의해 명시적으로 캐스팅되는 경우
- 예시
    
    ```cpp
    int iVariable = 20;
    float fVariable = (float) iVariable / 10;
    ```
    

# ex02: Identify real type

dynamic_cast 관련!

- class Base(public virtual destructor만 있음), 이를 상속하는 빈 클래스 A,B,C
- `Base *generate(void);` 랜덤하게 세 클래스 중 하나를 객체화하여(생성) Base포인터형으로 반환함
- `void identify(Base *p);` 해당 클래스의 진짜 타입을 출력
- `void identify(Base &p);` 포인터를 사용하지 않고 타입을 알아내서 출력
- <typeinfo> 사용 금지
