# Real-world Applications and Performance Analysis of Sorting Algorithms

1. Lựa chọn tên BTL, xác định chi tiết mục tiêu, các mốc bài tập lớn, phân chia nhiệm vụ cho từng thành viên, lựa chọn công nghệ làm BTL(git)
2. **Tổng hợp** tất cả các thuật toán so sánh, **hiểu rõ** nguyên lí hoạt động của từng thuật toán, và **thu thập** tài liệu về độ phức tạp về thời gian và độ phức tạp về không gian của từng thuật toán
   1. Hiểu rõ nguyên lí hoạt động của từng thuật toán
   2. Source code với trường hợp cơ bản là số nguyên
   3. Tài liệu về độ phức tạp thuật toán trên lí thuyết (1)
      1. Độ phức tạp về thời gian
      2. Độ phức tạp về không gian (có cần thêm không gian lưu trữ không?)
   4. Thảo luận lọc ra những thuật toán quan trọng
3. Tiến hành **triển khai** thuật toán, lọc ra thuật toán đệ quy và tìm biện pháp **khử đệ quy**
   1. Triển khai thuật toán trên kiểu dữ liệu cơ bản là số nguyên
   2. Phân loại các thuật toán đệ quy và tìm biện pháp khử đệ quy với từng thuật toán đó
      1. Mục đích: Tiết kiệm không gian bộ nhớ
      2. Yêu cầu: Tìm tài liệu về so sánh đệ quy và vòng lặp
      3. Viết tài liệu: Khi gặp dữ liệu lớn thì đệ quy dễ gặp trường hợp stack overflow *(phần khử đệ quy khó nên sẽ để ra 1 tuần để triển khai thuật toán)*
   3. Từ việc triển khai thuật toán có thể giải thích được độ phức tạp về thời gian và không gian của chúng
4. Từ thuật toán đã thu thập tiến hành **mở rộng** với **các kiểu dữ liệu khác** nhau, tìm hiểu về **built-in sorting function** trong các ngôn ngữ lập trình
   1. Với dữ liệu là **số thực**: số thực trong máy tính không có phép so sánh tuyệt đối, chỉ có phép so sánh tương đối nên cần dùng thêm 1 biến dung sai (epsilon) để tiến hành so sánh các phần tử với dung sai chấp nhận được
   2. Với dữ liệu là **chuỗi** **\***
   3. Tìm hiểu mỗi ngôn ngữ lập trình sử dụng built-in sorting function nào? Lý do họ lựa chọn
5. Nghiên cứu sâu về từng thuật toán để xác định điểm mạnh điểm yếu từng thuật toán. Tìm hiểu **các built-in functions**. Đề xuất các ứng dụng trong từng nhóm ngành, đặc điểm về dữ liệu của từng nhóm ngành
   1. Tính **ổn định(stable)** và **không ổn định(unstable)** của các thuật toán
   2. Tìm **best case** situation và **worst case** situation của từng thuật toán để áp dụng chúng vào thực tế. Nếu có thể thì phân loại chúng để tiện lợi cho việc tìm kiếm sau này
   3. **Thảo luận** các nhóm ngành để tìm đặc điểm về **data set** của chúng
6. Tìm kiếm, thu thập và phân loại **bộ dữ liệu(data set)** của từng nhóm ngành, để từ đó đưa ra đề xuất thuật toán tối ưu
   1. **Độ chính xác** về phần thập phân (nhóm ngành y tế, nhóm ngành CNC?)
   2. **Độ lớn** về mặt giá trị, bộ nhớ (nhóm ngành tiêu dùng?)
   3. **Tính liên tục**: Dữ liệu thay đổi ít hay nhiều theo thời gian? (nhóm ngành chứng khoán)
   4. Cần quan sát và tìm hiểu với dữ liệu vào của từng nhóm ngành
   5. Các dữ liệu của các nhóm ngành này có thể có thứ tự hoặc có thể không có thứ tự (id, nồng độ..., huyết áp...)
7. **Viết báo cáo** bài tập lớn và luôn luôn tìm các giải pháp tối ưu mã nguồn(using hybrid sorting algorithms OR create some new variables to reduce looping times)


