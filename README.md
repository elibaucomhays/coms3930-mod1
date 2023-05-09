# coms3930-mod1

<p align="center">
  <img width="300" height="400" src="/IMG-3692.jpg">
</p>

This readMe keeps it short with just the key information on usage. To read more, check out my [blog](https://www.notion.so/Generative-Art-Project-ff6eee9198044a74b3ba8672646dbc2c?pvs=4)!

<br />

**This project will require a:** 
- ESP32 TTGO T-Display
- A USB-C cable to connect to the ESP32
- A power source that can connect to your USB-C cable

<br />

**To use this:**
1. Make sure you have downloaded and installed Arduino. Follow [this link](https://www.arduino.cc/en/software) to download it if you need to.
2. Make sure you have configured your Arduino environment to use your ESP32. Open the Arduino IDE and go to \<File\>, \<Preferences\>, and paste this [link](https://dl.espressif.com/dl/package_esp32_index.json) into the “Additional Boards Manager URLs” field and hit OK. Then, go to \<Tools\>, \<Manage Libraries\>, and install “tft_eSPI” by “Bodmer”. Then go to \<Tools\>, \<Board\>, \<ESP32 Arduino\>, and then select the “TTGO T1” option. Then go to where your libraries are stored on your computer, and look for the “TFT_eSPI” folder, and open up the User_Setup_Select.h file. Comment out the line “#include <User_Setup.h>” and uncomment the line “#include <User_Setups/Setup25_TTGO_T_Display.h>”
3. Download the file from here called module1.ino and open it in the Arduino IDE. With your ESP32 plugged in, hit the upload button (it looks like an arrow pointing to the right) to display it on your ESP32.
