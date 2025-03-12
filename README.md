# 함수정의 (매개변수가 없을 때)
함수는 프로그램을 구성하는 소단위입니다. 
함수는 실행할 수 있다는 특징이 있습니다. 
함수 정의는 함수의 이름과 반환 타입을 정하고, 어떤 문장들을 실행할지를 정합니다.

`타입` `이름` `(` `)` `{` `문장리스트` `}` 형태로 씁니다.

`문장리스트`는 `문장`을 나열한 것이고, 없어도 됩니다. 

#### 코드 예시:
```c
/* 이름이 x고 실행되는 내용이 없는 함수 */
void x() {}
```

#### 관련 C89 표준
3.7 EXTERNAL DEFINITIONS
> **Syntax**
>
> external-declaration:
>
> function-definition
>
> declaration

> **Semantics**
>
> ... the unit of program text ... is a translation unit, which consists of a sequence of external declarations.
> These are described as "external" because they appear outside any function ...

3.7.1 Function definitions

> **Constraints**
> 
> The identifier declared in a function definition (which is the name of the function) shall have a function type ...
> 
> The return type of a function shall be void or an object type ...
> 
> ...

> **Semantics**
> ... function definition specifies the name of the function being defined ...
