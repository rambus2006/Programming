fun main(args: Array<String>) {
    //20230314

    //변수
    var a=100
    var b : String ="Hello"
    var c : Int=200

    //상수
    val d=300
    val PI=3.14
    var f=1.234F

    //타입 변환을 하고 싶을 때 반드시 메서드를 호출해서 해야 한다.
    var i=f.toInt()

    //
    var s="""
        uoidsfkasjhfklsdajk;lfjsad;a;slfdkjdslj
    """.trimIndent()
    
    var num1=100
    var num2=200
    //고전적 방법(이렇게 해도 되긴 함) var str="num1 : " + num1 + "num2 : " + num2
    var str = "num1 : ${num1} num2 : ${num2*2}"
    println(str)
    
    //any타입 : 모든 타입의 값을 대입할 수 있는 최상위 타입
    var anyValue : Any
    anyValue=100
    anyValue="Hello"

    //이렇게 쓰면 추론을 잘못해서 에러남
    // var anyValue : Any=100
    //anyValue="Hello"

    //nullable 타입
    //var n=100 일 때
    //n의 타입은 int, 저장할 수 있는 값이 "정수"만을 의미한다.
    //기본적으로 null값으로 추론하지 않기 때문에 "?" 를 타입 뒤에 붙여줘야 null값으로 추론할 수 있다.
    var n:Int?=100
    n=100
    var sss:String?="Hello"
    sss=null

    //대문자만 써야 한다.
    //int (x)
    //float(x)

    //"?. 연산자"
    //nullpoinexception 이 나지 않는다. (애초에 nullable 타입으로 추론하지 않아서 에러가 나지 않는다. )
    var s1="Hello"
    print(s1.length)
    println(s1.startsWith("He"))

    //nullpoinexception 이 나지 않는 대신 null을 리턴 받는다. (에러가 나지는 않는다)
    var s2:String? =null
    println(s2?.length)
    //println(s2!!.length) 은 nullable타입인 것을 nullable타입이 아닌 것으로 바꾼다.
    // (변수의 값이 null이 아닐 때 에러가 나지 않을 것을 확신할 때만 쓴다)
    println(s2?.substring(0,3)?.lowercase()?.length) //여기에서 null이 반환되었을 때 중간에서 죽은 것이다.(망한 것이다.)

    //"?."<=null-safe operator
    //!!.<=non-null asserted operator
    var i:Int?=100
    var ii:Int=i!!
    // #null
    // 코틀린의 타입(type) 시스템은 코드에서 NullPointerExeption을 제거하기 위한 것입니다. NPE의 유일한 원인은 아래와 같습니다:
    //throw NullPointerException을 명시적으로 호출하는 것;
    //아래에서 설명하는 것과 같이 !! 연산자를 사용하는 것;
    //초기화와 관련하여 아래와 같은 특성으로 데이터의 불일치가 발생할 때:
    //생성자에서 this를 초기화하지 않고도 사용할 수 있으며, 다른 곳으로 전달되어 사용할 수 있음(“leaking this” 라고 함);
    //수퍼 클래스 생성자는 파생 클래스의 구현에서 초기화되지 않은 상태를 사용하는 open member를 호출함;

    var s2: String?=null //null값,만약에 "Hello"같은 값이 있을 때

    if(s2 !=null){ //여기를 통과하게 된다.
        // 안에서 따로 null값인지 확인하지 않아도 자기가 알아서 String 타입으로 알아듣는다.
        println(s2.length)
    }

    //엘비스 연산자 => ?:
    var one=null ?:1 //왼쪽이 null이면 오른쪽 값을 반환한다.
    var c1:String?=null
    var len1=if(c1?.length ==null) 0 else c1.length //c1의 길이가 null 이면 0을 반환하고, 아니면 c1의 길이를 반환한다.
    //코틀린에서는 if 문으로 삼항 연산자를 대체한다. (코틀린에서는 if else문이 표현식이다.자바에서는 구문이다.)

    var s3="Hello"
    //var i4=s3.toint() 하면 오류나는 것을 방지하기 위해
    var i4=s3.toIntOrNull()

    //주석
    //"//"과 "/**/",중첩 주석
    /*
    /*
    */
     */

}