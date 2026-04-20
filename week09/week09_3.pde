//week09-3
PImage img;
void setup(){
    size(600,500);
    img = loadImage("balloon.png");
}

float x,y,s=0.1;
void draw (){
  background(#B74343);
  if(mousePressed){
    s=s*1.02;
    image(img,mouseX-96/2*s,mouseY-132*s,96*s,132*s);
  } else s = 0.1;
}
