void setup() {
  // put your setup code here, to run once:
  Serial1.begin(961200);
}

void loop() {
  // put your main code here, to run repeatedly:
  char buf[128]={0x54,0,1};
  buf[127]=0x55;
  Serial1.write(buf,128);  
  delay(2000);
}
