var canvas=document.querySelector('canvas')

canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

var c = canvas.getContext('2d');

/*
c.fillStyle = 'rgba(255,0,0,0.5)';  //색깔 채우기 (하위의 있는 모양)
//c.fillRect(x,y,width,height);
c.fillRect(100,100,100,100);
c.fillStyle = 'rgba(0,0,255,0.5)';  //색깔 채우기 (하위에 있는 모양)
c.fillRect(400,100,100,100);
c.fillStyle = 'rgba(0,25,0,0.5)';  //색깔 채우기 (하위에 있는 모양)
c.fillRect(300,300,100,100);
console.log(canvas);

//선그리기 Ep2
c.beginPath();
//c.moveTo(x,y);
c.moveTo(50,300);   //시작점 설정
c.lineTo(300,100);  //선 그리기
c.lineTo(400,300);
c.strokeStyle="#fa34a3";//선 색상 설정
c.stroke();

//원그리기
c.beginPath();
c.arc(300,300,30,0,Math.PI * 2,false);
c.strokeStyle="blue";/*색상
c.stroke();

//for문을 통해 반복해서 원그리기(새로고침 할 때마다 위치 바뀜)
for(var i=0;i<100;i++){
    //for문 돌때마다 위치 다르게 하기 
    var x=Math.random()*window.innerWidth;     //Math.random
    var y=Math.random()*window.innerHeight;
    var circlecolor="#"+Math.round(Math.random()*0xffffff).toString(16);        //랜덤으로 원의 테두리색상을 바꾸는 코드
    c.beginPath();
    c.arc(x,y,30,0,Math.PI * 2,false);      //x,y,
    c.strokeStyle=circlecolor;   /*색상
    c.stroke();
}
*/
/*3강 애니메이션 만들기 */
//원그리기
/*c.beginPath();
c.arc(300,300,30,0,Math.PI * 2,false);
c.strokeStyle="blue";/*색상
c.stroke();*/

var x = 200;
var dx=4;
var dy=4;
var radius=30;
function animate(){
    requestAnimationFrame(animate);
    c.clearRect(0,0,innerWidth,innerHeight);

    c.beginPath();
    c.arc(x,200,radius,0,Math.PI * 2,false);
    c.strokeStyle="blue";/*색상*/
    c.stroke();

    if(x > innerWidth || x-radius){
        dx=-dx;
    }
    if(y > innerWidth || y-radius){
        dy=-dy;
    }
    x += dx;
    y += dy;
}

