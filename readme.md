<br>

# 엣지 컴퓨터 구성 Edge Computer Setting  
- `Arduino Feather M0`를 사용하여 엣지를 구성한다.  
We used `Arduino Feather M0` to constitute the edge.<br>
- Arduino Feather M0는 와이파이 모듈을 탑재하고 있어 센싱한 데이터를 서버에 전송할 수 있다.  
The Arduino Feather M0 is equipped with a Wi-Fi module, which enables sending data to the server.<br>
- 아두이노에 임포트한 코드는 nCube:Thyme과 TAS를 포함한다.  
The code imported on Arduino include nCube:Thyme and TAS.
<br>

## 현재 상태 Current Status  
- `CCS811` 센서를 사용하여 eCo2와 온도를 센싱한다.  
Measure eCo2 values and temperature values using `CCS811` sensor.<br>
- LED Actuator를 제어한다.  
Control the LED actuator.<br>
- 모비우스 서버에 1초마다 데이터를 전송한다.  
Send data to the Mobius server every second.<br>
<br>

## 과제  TO DO  
- 센싱한 데이터를 전처리해야 한다.  
Data should be preprocessed.<br>
- 데이터 전송 주기를 서버에서 컨트롤 할 수 있어야 한다.  
Server should be able to control the period of sending data.<br>
- 유속, 습도 센서를 추가해야 한다.  
Flow rate, humidity sensor shall be added.<br>
<br>

## 사용 방법  How to use

1. 아두이노 Idle을 [Idle 다운로드](https://www.arduino.cc/en/Main/Software) 하여 설치한다.
1. 아두이노 환경을 설정한다.  
   + 파일 -> 환경설정 -> '추가적인 보드 매니저 URLs' 항목에 `https://adafruit.github.io/arduino-board-index/package_adafruit_index.json`을 추가한다.
   + 툴 -> 보드 -> 보드 매니저... 에서 `adafruit samd boards`를 검색하여 나오는 두 개의 패키지를 모두 설치한다.
   + 툴 -> 보드에서 `Adafruit Feather M0`를 선택한다.
   + 개발환경이 Windows일 경우 Adafruit Windows Driver가 필요하다. [Driver다운로드](http://adafru.it/mai)를 받아 실행한다.
   + 스케치 -> 라이브러리 포함하기 -> 라이브러리 관리... 에서 `ArduinoJson` 과 `WiFi101`을 검색하여 설치한다. 이때, ArduinoJson은 v5.x.x를 설치한다.
1. nCube:Thyme for arduino를 아두이노 라이브러리에 추가한다.
   + github에서 코드를 다운로드 받는다. 
    ```shell script
      git clone 'https://github.com/2020-SKKU-S-HERO/thyme-arduino_adaptation'
    ```
   + 파일 -> 환경설정 -> 스케치북 위치에서 경로를 확인하여, 해당 경로에 다운로드한 라이브러리들을 옮긴다.
1. 코드를 연다.
   + 파일 -> 예제에서 다운로드한 예제를 연다.
   