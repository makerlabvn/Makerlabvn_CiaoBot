# CiaoBot
CiaoBot là một sản phẩm của MakerLab giúp bạn tự DIY một chiếc máy chào khách với những ưu điểm vượt trội so với hầu hết các loại máy chào khách chỉ kêu "kính cong" đơn điệu trên thị trường.
## Các ưu điểm của CiaoBot

- Vì đây là một bộ kit theo hướng DIY nên chương trình sẽ được cung cấp để các bạn có thể tùy chỉnh, hỗ trợ Arduino (code C) và mBlock (kéo thả khối), giúp bạn có thể tùy biến, bổ sung các chức năng mong muốn.
- Âm thanh máy chào (như "MakerLab xin chào" / "MakerLab tạm biệt") là dạng *.mp3 có thể thay đổi dễ dàng qua thẻ nhớ đi kèm.
- Sử dụng 2 cảm biến vật cản quang học chất lượng cao giúp phát hiện chiều ra / vào.
- Tích hợp màn hình LCD hiển thị thông tin như số lượt checkin, dung lượng phòng (capacity).
- Cấp nguồn an toàn qua cổng USB-C sử dụng sạc điện thoại hoặc pin dự phòng.

## Hình ảnh bộ kit
![ciaobot main](/image/ciaobot1.png)
## Các thành phần có trong bộ kit
![ciaobot inside](/image/ciaobot2.png)
## Hướng dẫn sử dụng
### Giới thiệu
[![Ciaobot introduce](/image/introduce.png)](https://www.youtube.com/watch?v=pvLTHNnOPeM)
### Hướng dẫn lắp ráp
[![Ciaobot assembly](/image/assembly.png)](https://www.youtube.com/watch?v=QY7m3F5WTkc)
### Cài đặt Driver
Mạch điều khiển trung tâm MakerEdu Creator sử dụng Driver giao tiếp máy tính CH340 sẽ tự động nhận Driver trên các hệ điều hành Windows / MacOS / Linux, tuy nhiên nếu không nhận cổng COM của mạch bạn vẫn có thể [tải và cài đặt Driver cho CH340 tại đây.](https://www.mediafire.com/file/fsem9mtf5yl56q6/[MakerLab.vn]+CH340+Driver+WinMacLinux.zip/file), để kiểm tra cổng COM đã nhận trên hệ điều hành Windows các bạn tìm kiếm "Device Manager" trong mục "Port (COM & LPT)" sẽ thấy nhận thiết bị CH340 (COMx) như hình.
![ciaobot comport](/image/comport.png)
 ### Chuẩn bị thẻ nhớ MicroSD

Module phát âm thanh sử dụng thẻ nhớ MicroSD để lưu trữ âm thanh dưới định dạng *.mp3, các bạn format thẻ theo định dạng FAT32, tạo một thư mục có tên là MP3 và tạo các file âm thanh có cấu trúc tên 0001_xxx.mp3, 0002_xxx.mp3,..., 0999_xxx.mp3 như hình, khi gọi file âm thanh trong chương trình sẽ chỉ cần gọi theo số thứ tự 1,2,...,999 là ta sẽ phát được file yêu cầu.
![ciaobot sdcard](/image/sdcard.png)
### Hướng dẫn lập trình với mBlock (kéo thả khối)

- Tải và cài đặt phần mềm mBlock 5 ([Windows](https://www.mediafire.com/file/ma55iajd7glwmbo/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Windows.zip/file) / [Mac Intel](https://www.mediafire.com/file/pjfngy6d7ktb55f/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_Intel.zip/file) / [Mac M1M2](https://www.mediafire.com/file/mfdkgpgnpa7uv2s/%255BMakerLab.vn%255D_mBlock_V5.4.3_for_Mac_M1M2.zip/file))
- Thêm Device "MakerEdu Creator" by MakerEduVN
- Thêm Extension "Upload Mode Broadcast" by mBlock Official
- Thêm Extension "MakerEdu Hardware" by MakerEduVN
- Mở [chương trình mẫu tại đây](/mBlock5), kết nối mạch và nạp chương trình.

[![Ciaobot mblock](/image/mblock.png)](https://www.youtube.com/watch?v=fWIyjU7ekBY)
### Hướng dẫn lập trình với Arduino (code C)

- Tải và cài đặt [phần mềm Arduino tại đây.](https://www.arduino.cc/en/software)
- Trong Tools / Library Manager, tìm và cài đặt bộ thư viện tổng hợp "MAKERLABVN" by MakerLab.vn
- Mở chương trình mẫu tại File / Examples / MAKERLABVN / Kit / CiaoBot hoặc [tải chương trình mẫu tại đây](/arduino)
- Chọn board là Arduino Uno (mạch MakerEdu Creator tương thích với Arduino Uno), chọn đúng cổng COM Port của mạch và tiến hành nạp chương trình.

[![Ciaobot arduino](/image/arduino.png)](https://www.youtube.com/watch?v=XfQZ-G5rleQ)
### Các lưu ý khi sử dụng
[![Ciaobot note](/image/note.png)](https://www.youtube.com/watch?v=Bjzt4SOK1gk)
## Hỗ trợ và liên hệ:
- Website: [https://www.makerlab.vn/](https://www.makerlab.vn/)
- Facebook: [https://www.facebook.com/makerlabvn](https://www.facebook.com/makerlabvn)
## Nhà phân phối
- Các bạn có thể mua sản phẩm tại các [nhà phân phối của MakerLab](https://www.makerlab.vn/nha-phan-phoi/).
