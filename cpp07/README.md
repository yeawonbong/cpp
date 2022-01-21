[cpp07.en.subject.pdf](https://cdn.intra.42.fr/pdf/pdf/35954/en.subject.pdf)

# C++ Templates

[ref](https://www.cplusplus.com/doc/oldtutorial/templates/)

## Function templates

- Function templates는 제네릭 타입으로 작동할 수 있는 특별한 함수이다.
    - generic programming: 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 타입을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 프로그래밍 방식
- 타입별로 각 함수를 정의하지 않아도 되게 해주어 코드 재사용성 높.
- 인자가 정규 타입임에 한하여 모든 타입을 대입해 사용할 수 있다.

### single template parameter

```cpp
/*정의부*/
template <class identifier> function_declaration;
template <typename identifier> function_declaration;

/*사용부*/
function_name <type> (parameters);
```

- 사용예시
    
    ```cpp
    template <class myType>
    myType GetMax (myType a, myType b) {
     return (a>b?a:b);
    }
    
    /*사용*/
    int x,y;
    GetMax <int> (x,y);
    ```
    
- 그런데, 사용시에 컴파일러가 인자들의 타입을 보고 자동으로 데이터타입(T)을 찾아주기 때문에, 함수 뒤<>에 명시적으로 적어주지 않아도 알아서 타입이 지정되어 작동된다. (이 경우 두 인자의 타입이 같고, 정의한 template parameter가 하나이기 때문에 가능)
    
    ```cpp
    int i, j;
    GetMax(i,j); //이렇게만 적어도 자동으로 int로 인식되어 돌아감.
    ```
    

### multiple template parameters

```cpp
template <class T, class U>
T GetMin (T a, U b) {
  return (a<b?a:b);
} 

/*사용*/
int i,j;
long l;
i = GetMin<int,long> (j,l);

/*simply: */
i = GetMin<j,l>; //이렇게도 가능
```

- 이런 식으로 여러 타입의 파라미터도 지정할 수 있다.
- even though j and l have different types, since the compiler can determine the appropriate instantiation anyway.

## Class templates

(same ref)

- class template로, 클래스가 template parameter 타입을 멤버 변수로 갖게 할 수 있다.
- 예시
    
    ```cpp
    template <class T>
    class mypair {
        T values [2];
      public:
        mypair (T first, T second)
        {
          values[0]=first; values[1]=second;
        }
    };
    
    /*사용부*/
    mypair<int> myints(1, 2);
    mypair<double> mydoubles(1.1, 2.2);
    ```
    
    - 선언하여 사용할 때는 클래스 이름 옆에 <type>을 명시해주면 된다.
    - 멤버 함수 정의를 class 선언 밖에서 할 경우, 아래와 같이 붙여줘야 한다.
        
        ```cpp
        // class templates
        #include <iostream>
        using namespace std;
        
        template <class T>
        class mypair {
            T a, b;
          public:
            mypair (T first, T second)
              {a=first; b=second;}
            T getmax ();
        };
        
        template <class T> 
        T mypair<T>::getmax () // 함수 정의
        {
          T retval;
          retval = a>b? a : b;
          return retval;
        }
        
        int main () {
          mypair <int> myobject (100, 75);
          cout << myobject.getmax();
          return 0;
        }
        ```
        

### Template specialization

# ex00: A few functions

[function template 관련 (단일 template parameter)](https://www.notion.so/CPP07-dcc43f8327ca481691bc17c2747ee442) 

## 과제 요구 정리

- 세 함수 템플릿을 만들어라 (function template)
    - `swap` : 두 인자를 swap하기, return값은 없다.
    - `min` : 두 인자 중 작은 인자를 반환하기, 둘이 같다면 두번째 인자를 반환.
    - `max` : 두 인자 중 큰 인자를 반환하기, 둘이 같다면 두번째 인자를 반환.
- 템플릿은 헤더 파일에 정의되어야 한다.
- 모든 타입의 인자가 들어올 수 있다. 단, 두 인자는 같은 타입이며 모든 비교 연산자를 제공한다.

![image](https://user-images.githubusercontent.com/75327385/150472059-d6b00765-0b46-47e1-98b4-08b8a54ed6b9.png)


# ex01: Iter

function template을 이용한 iterator

## 과제 요구 정리

- function template `iter` 을 만들어라.
    
    ```cpp
    void iter(T *배열주소, unsigned int 배열의길이, void(*f)(T &배열));
    ```
    
    - 3개의 parameter을 받고, 리턴값은 없다.
        - 첫번째 param: 배열의 주소값
        - 두번째 param: 배열의 길이
        - 세번째 param: 배열을 인자로 받는, 각 요소에 호출되는 함수 - function template?
    - 정리하자면, 받은 배열의 모든 요소에 함수(세번째 함수)를 모두 적용하는 함수v
- 실행파일로 iter 함수 템플릿이 모든 타입의 array와 작동하는 지 테스트해라. (세번째 인자의 경우 아무 function template)

## function pointer to function template?

[ref](https://www.nextptr.com/question/a1167134793/function-pointer-to-an-instance-of-a-function-template)

- function template의 instance에는 함수포인터를 사용할 수 있다.
- a function template itself is not a function but a template to many possible function instances.

### **Function template instantiation** [ref](https://en.cppreference.com/w/cpp/language/function_template)

- function template은 타입도, 함수도, 아무것도 아니고 그냥 템플릿 정의만 있는 소스라 보면 된다.
- 이를 사용하기 위해서는 `instantiate` 시켜야 함 (객체화/생성)
    - 템플릿의 인자가 정해져야 컴파일러가 실제 함수(or 클래스)를 생성할 수 있다.
- **클래스 템플릿은 무조건 템플릿 인수를 명시해 주어야 한다.** 인스턴스를 생성하는 과정에 이유가 있는데, 생성자를 호출하기 전에 해당 객체에 대한 메모리를 미리 할당하기 때문이다. 따라서 명시적으로 템플릿 인수를 작성하지 않을 경우 객체를 생성할 수가 없는 것이다.

### Explicit instantiation

```cpp
**template** *return-typename* *<argument-list> (parameter-list) ;*
**template** *return-typename* (*parameter-list*);
```

```cpp
template<typename T>
void f(T s)
{
    std::cout << s << '\n';
}
 
template void f<double>(double); // instantiates f<double>(double)
template void f<>(char);         // instantiates f<char>(char), template argument deduced
template void f(int);            // instantiates f<int>(int), template argument deduced
```

# ex02: Array

class template 관련

## 과제 요구 정리

- 다음과 같은 class template Array를 만들어라
    - type T의 요소를 갖음.
    - 생성자
        - `Array()` : empty array를 만든다.
        - `Array(unsigned int n)` : n개의 요소를 가진 배열을 만든다.
            - Tip: try to compile `int * a = new int()`, then display `*a`
                
                ```cpp
                int *a = new int();
                std::cout << *a;
                
                // 0 출력 (int size 메모리 할당하고, 0으로 초기화되나봄)
                ```
                
        - 복사생성자, 대입연산자. - deep copy해라.
    - 할당 시 operator `new[]` 를 사용해라. preventive allocation을 하면 안된다. non-allocated memory에 접근하면 안된다.
    - 요소들은 `operator[]`로 접근 가능해야 한다.
        - 이 때 만약 요소가 범위 밖의 값이면, `std::exception` 을 예외로 던져야 한다.
    - 멤버함수 `unsigned int size() const;` 는 array의 요소 갯수를 반환한다.
    - const operator[]도 구현할것
        - const class 경우 const멤버만 접근 가능
    - template은 헤더 안에 구현해야 함. ~~(컴파일 타임에 준비되어서)~~ [ref](https://www.sapphosound.com/archives/389)
    

## 추가

- `srand(time(NULL));` [관련](https://jinyes-tistory.tistory.com/131)
    - [https://reakwon.tistory.com/63](https://reakwon.tistory.com/63)
    - 찐 난수 생성