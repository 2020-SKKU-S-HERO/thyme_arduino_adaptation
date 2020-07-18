# 엣지 컴퓨터 구성 Edge Computer Setting


- Arduino Feather M0를 사용하여 엣지를 구성한다.  
We used 'Arduino Feather M0' to constitute the edge.
- Arduino Feather M0는 와이파이 모듈을 탑재하고 있어 센싱한 데이터를 서버에 전송할 수 있다.  
The Arduino Feather M0 is equipped with a Wi-Fi module, which enables sending data to the server.
- 아두이노에 임포트한 코드는 nCube:Thyme과 TAS를 포함한다.  
The code imported on Arduino include nCube:Thyme and TAS.
<br>


## 현재 상태 Current Status
- CCS811 센서를 사용하여 eCo2와 온도를 센싱한다.
Measure eCo2 values and temperature values using 'CCS811' sensor.
- LED Actuator를 제어한다.
Control the LED actuator.
- 모비우스 서버에 1초마다 데이터를 전송한다.  
Send data to the Mobius server every second.
<br>


## 과제  TO DO
- 센싱한 데이터를 전처리해야 한다.  
Data should be preprocessed.
- 데이터 전송 주기를 서버에서 컨트롤 할 수 있어야 한다.  
Server should be able to control the period of sending data.
- 유속, 습도 센서를 추가해야 한다.  
Flow rate, humidity sensor shall be added.
<br>



## 사용 방법

ssh를 사용하여 접속할 수 있다. rsa key는 rsa-gcp-key 파일을 사용한다.
rsa-gcp-key 파일이 있는 곳에서 터미널을 열고 다음의 쉘 명령어를 입력한다.
외부 아이피는 34.74.238.233이다.

```shell script
ssh -i ./rsa-gcp-key shero@34.64.238.233
```

### 서버 상태

구글 클라우드 플랫폼의 리눅스 서버에 MySQL과 mosquitto, Grafana를 구축하였고,
백그라운드에 파이썬으로 작성된 구독자 프로그램을 실행 중이다.
