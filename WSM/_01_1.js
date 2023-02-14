/*
[01-1 자바스크립트의 활용] 

{자바스크립트의 개념}
-자바스크림트 : 프로그래밍 언어
-역사 : 브렌던 아이크 '모카' ->'라이브스크립트'->자바스크립트
-자바와는 완전히 다른 언어

{자바스크립트로 할 수 있는 것들}
1.웹 클라이언트 애플리케이션 개발 
 과거: 변하지 않는 정적인 글자들로만 이루어져있었다.하이퍼링크로 정보를 보여주는 것에 불과했다. (정적)
 현재: 웹 문서의 내용을 동적으로 바꾸거나 사용자의 마우스 클릭과 같은 이벤트 처리가 가능해졌다. (동적)
       웹 문서는 발전해 기존의 웹 페이지 보다 다양한 기능을 가진 웹 페이지를 웹 애플리케이션이라고 부른다. 
       ex)웹 문서 작성 도구 : 과거에는 애플리케이션을 설치해야 문서 작성이 가능했지만 현재는 웹 브라우저 
                            안에서 애플리케이션을 설치하지 않고도 문서 작성이 가능하다. 

2.웹 서버 애플리케이션 개발 
 과거: 웹 클라이언트 애플리케이션을 자바 스크립트로 개발하고, 웹 서버 애플리케이션은 C#,자바,루비등의 프로그래밍 언어로
        개발해야 했다. (웹 개발을 하려면 2개 이상의 언어가 필요했다.)
 현재:2009년에 Node.js가 나오면서 자바스크립트로 웹 서버 애플리케이션을 개발할 수 있게 되었다. 
      자바스크립트로 모든 웹 개발을 할 수 있게 되었다. 
 *Node.js의 특징 : 1)웹 서버 애플리케이션을 개발할 때 꼭 필요한 간단한 모튤만 제공한다.
                     다른 스크립트 언어와 프레임 워크를 사용할 대보다 데이터 처리와 예외 처리가 복잡하다. 
                  2)Node.js는 빠르다

3.모바일 애플리케이션 개발
 자바스크립트를 사용하면 하나의 애플리케이션만 만들어도 모든 스마트폰에서 동작해 기업 입장에서는 제작비용을 절반으로 
 줄일 수 있어 좋다. 
 *페이스북에서는 자바스크립트로 네이티브 애플리케이션을 개발할 수 있는 리액트 네이티브를 만들어 공개했다. 
 이를 활용해 자바스크립트만으로 모든 운영체제에서 빠르게 작동하는 네이티브 애플리케이션을 만들 수 있다. 
 *네이티브 애플리케이션:자바와 스위프트등 스마트폰에 최적화된 프로그래밍 언어로 만든 애플리케이션, 우리가 흔히 사용하는 
                      모바일 애플리케이션을 말한다. 
 *하이브리드 앱: 스마트폰의 기능과 웹 페이지를 연결할 수 있는 층을 설치해 웹사이트가 스마트폰의 기능을 활용할 수 있게됨
                ex)쿠팡,위메프등 일반적으로 모바일 사이트에서도 똑같이 보이면서 스마트폰 고유의 모습도 가지고 있는 앱

4.데스크톱 애플리케이션 개발
  모바일 애플리케이션을 자바스크립트로 만드는 일이 일반화되어 데스크톱 애플리케이션도 자바스크립트로 만들자는 의견이 생김 ->
  NW.js(노드웹킷 제이에스)모듈등으로 데스크톱 애플리케이션 개발에 자바스크립트를 사용하기 시작함->깃허브에서 NW.js개발자를 흡수->
  자바스크립트 개발 전용 텍스트 에디터인 아톰을 만들어 배포함.->아톰을 만들 때 활용한 아톰 셸을 일렉트론이라는 이름으로 공개
  하며 다른 개발자들도 자바스크립트로 데스크톱 애플리케이션을 개발할 수 있게 됨
  *NW.js : 크로미움(크롬 브라우저 축소판)과 Node.js를 기반으로 하며, HTML과 자바스크립트로 네이티브 애플리케이션을 만드는 
            웹 애플리케이션이다. 

5.데이터베이스 관리
 -데이터베이스:데이터를 저장할 때 사용하는 프로그램
 -SQL을 많이 사용해 데이터를 관리
 -NoSQL:2010년 이후 빅데이터를 처리하기 위해 등장한 기술
 -NoSQL의 MongoDB가 데이터 베이스를 관리할 때 자바 스크립트를 활용하는 대표적인 데이터베이스이다. 

{자바스크립트의 종류}
 - ECMAScript:자바스크립트의 표준 명칭, 유럽 컴퓨터제조협회에서 만들었다. 

[01-2]==============================================================================================================
{오류 검사 방법}
 크롬창-마우스 오른쪽-검사(ctrl+shift+i)-console탭 클릭

{대표적인 오류}
Uncaught ReferenceError : 00 is not defined
예외처리(오타있을 때 많이 일어난다. )
Uncaught SyntaxError: Invalid or unexpected token
기호를 잘못 입력했을 때 발생하는 코드(따옴표를 잘 보자)
Uncaught SyntaxError: missing) after argument list
기호를 잘못 입력했을 때 발생하는 코드(괄호를 닫지 않았을 때 )

[01-3]=============================================================================================================
{기본용어}
표현식<문장<프로그램

-표현식 : 자바스크립트에서 값을 만들어내는 간단한 코드
 ex) 273, 10+20+30*2 , 'RintIanTta'등
-문장: 하나 이상의 표현식이 모이는 것. 끝에 세미콜론을 붙여 문장의 끝을 알려줌 
 ex) //세미콜론 사용
      10+20+30*2; var rintiantta='Rint'+'Ian'+'Tta'; alert('Hello js'); 273;
      //줄바꿈을 통한 문장구분
      10+20+30*2
      var rintiantta='Rint'+'Ian'+'Tta'
      alert('Hello js')
      273

      //둘다 쓰는 경우
      10+20+30*2;
      var rintiantta='Rint'+'Ian'+'Tta';
      alert('Hello js');
      273;
-프로그램: 문장이 모인 것

{키워드}
-검색 ㄱㄱ

{식별자}
-식별자:프로그래밍 언어에서 이름을 붙일 때 사용하는 단어.주로 변수명이나 함수명등으로 사용된다. 
-식별자 규칙
    1)키워드를 사용하면x
    2)숫자로 시작하면 안됨
    3)특수문자는 _와 $만 허용한다. 
    4)공백문자를 포함할 수 없다. 
-기타 규칙
    1)클래스의 이름은 항상 대문자
    2)인스턴스,함수,메소드의 이름은 항상 소문자
    3)여러단어로 이루어진 식별자는 각 단어의 첫글자를 대문자로 한다. 

-식별자의 종류
    구분                     |   단독으로 사용       |       다른 식별자와 사용
    -----------------------------------------------------------------------------
    식별자 뒤에 괄호 없음     |     변수             |      속성
    식별자 뒤에 괄호 있음     |     함수             |      메소드
*/