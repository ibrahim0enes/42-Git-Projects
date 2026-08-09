*This project has been created as part of the 42 curriculum by ibcolak.*

# Libft

## Description

<!-- TR
Bu proje, kendi C kütüphanemizi oluşturduğumuz ve bunu Makefile komutuyla derleyip object dosyalarını (.o) ve kütüphane arşivini (libft.a) ürettiğimiz bir projedir. libft.h, oluşturduğumuz bu C kütüphanesinin başlık dosyasıdır ve içindeki tüm fonksiyonların tanımlarını barındırır. Kütüphane, proje isteklerine göre ihtiyaç duyulan fonksiyonların bir araya toplandığı, sonraki projelerde hızlıca kullanılabilmesi için yazıldı. Üç bölümden oluşuyor: Part 1 (libc fonksiyonları), Part 2 (ekstra fonksiyonlar) ve Bonus (linked list fonksiyonları).
-->

<!-- EN
This project is where we build our own C library and compile it with the Makefile, producing object files (.o) and the library archive (libft.a). libft.h is the header file of this library and contains the declarations of every function in it. The library was written to gather the functions needed by project requirements into one place, so they can be reused quickly in future projects. It is made up of three parts: Part 1 (libc functions), Part 2 (extra functions), and Bonus (linked list functions).
-->

## Instructions

<!-- TR
Nasıl derlenir / kullanılır?

- `make` : zorunlu kısmı derler ve libft.a'yı oluşturur
- `make bonus` : zorunlu kısma ek olarak linked list fonksiyonlarını da derleyip libft.a'ya ekler
- `make clean` : derleme sırasında oluşan .o dosyalarını siler
- `make fclean` : .o dosyalarını ve libft.a'yı siler
- `make re` : önce fclean sonra all çalıştırıp baştan derler

Başka bir projede kullanmak için libft.h'ı include edip, derlerken libft.a'yı linklemek yeterli:

cc -Wall -Wextra -Werror dosyalarim.c -I yol/Libft -L yol/Libft -lft -o program

Test dosyasını çalıştırmak için:

cc -Wall -Wextra -Werror *.c test_libft.c -o test_libft
./test_libft
-->

<!-- EN
How to build / use it?

- `make` : builds the mandatory part and creates libft.a
- `make bonus` : additionally compiles the linked list functions and adds them to libft.a
- `make clean` : removes the .o files produced during compilation
- `make fclean` : removes the .o files and libft.a
- `make re` : runs fclean then all, rebuilding everything from scratch

To use it in another project, include libft.h and link libft.a at compile time:

cc -Wall -Wextra -Werror your_files.c -I path/Libft -L path/Libft -lft -o program

To run the test file:

cc -Wall -Wextra -Werror *.c test_libft.c -o test_libft
./test_libft
-->

## Library

<!-- TR
### Part 1 - Libc fonksiyonları

| Fonksiyon | Ne işe yarar |
|---|---|
| ft_isalpha | Karakter harf mi diye bakar |
| ft_isdigit | Karakter rakam mı diye bakar |
| ft_isalnum | Karakter harf ya da rakam mı diye bakar |
| ft_isascii | Karakter ASCII aralığında mı (0-127) diye bakar |
| ft_isprint | Karakter yazdırılabilir mi diye bakar |
| ft_strlen | String'in uzunluğunu döner |
| ft_memset | Bir bellek alanını verilen değerle doldurur |
| ft_bzero | Bir bellek alanını sıfırlar |
| ft_memcpy | Bir bellek alanını başka bir alana kopyalar |
| ft_memmove | ft_memcpy gibi ama üst üste binen alanlarda da güvenli çalışır |
| ft_strlcpy | Bir string'i belirtilen boyutta güvenli şekilde kopyalar |
| ft_strlcat | Bir string'i başka bir string'in sonuna güvenli şekilde ekler |
| ft_toupper | Küçük harfi büyük harfe çevirir |
| ft_tolower | Büyük harfi küçük harfe çevirir |
| ft_strchr | String içinde bir karakterin ilk geçtiği yeri bulur |
| ft_strrchr | String içinde bir karakterin son geçtiği yeri bulur |
| ft_strncmp | İki string'i n karaktere kadar karşılaştırır |
| ft_memchr | Bellek alanında bir byte'ı arar |
| ft_memcmp | İki bellek alanını karşılaştırır |
| ft_strnstr | Bir string içinde n karaktere kadar alt string arar |
| ft_atoi | String'i int'e çevirir |
| ft_calloc | Bellek ayırır ve sıfırlar |
| ft_strdup | Bir string'in kopyasını heap'te oluşturur |

### Part 2 - Ekstra fonksiyonlar

| Fonksiyon | Ne işe yarar |
|---|---|
| ft_substr | String içinden belirli bir aralığı (alt string) alır |
| ft_strjoin | İki string'i birleştirip yeni bir string döner |
| ft_strtrim | String'in başından ve sonundan istenen karakterleri temizler |
| ft_split | String'i verilen ayırıcı karaktere göre parçalara böler |
| ft_itoa | int'i string'e çevirir |
| ft_strmapi | String'in her karakterine bir fonksiyon uygulayıp yeni string döner |
| ft_striteri | String'in her karakterine bir fonksiyon uygular (yerinde değiştirir) |
| ft_putchar_fd | Bir karakteri verilen dosya tanımlayıcısına (fd) yazar |
| ft_putstr_fd | Bir string'i verilen fd'ye yazar |
| ft_putendl_fd | Bir string'i sonuna \n ekleyerek verilen fd'ye yazar |
| ft_putnbr_fd | Bir int'i verilen fd'ye yazar |

### Bonus - Linked list

| Fonksiyon | Ne işe yarar |
|---|---|
| ft_lstnew | Yeni bir liste elemanı (node) oluşturur |
| ft_lstadd_front | Listenin başına eleman ekler |
| ft_lstsize | Listedeki eleman sayısını döner |
| ft_lstlast | Listenin son elemanını döner |
| ft_lstadd_back | Listenin sonuna eleman ekler |
| ft_lstdelone | Tek bir elemanı içeriğiyle beraber siler |
| ft_lstclear | Listenin tamamını siler |
| ft_lstiter | Listedeki her elemanın içeriğine bir fonksiyon uygular |
| ft_lstmap | Listedeki her elemana bir fonksiyon uygulayıp yeni bir liste oluşturur |
-->

<!-- EN
### Part 1 - libc functions

| Function | What it does |
|---|---|
| ft_isalpha | Checks if a character is a letter |
| ft_isdigit | Checks if a character is a digit |
| ft_isalnum | Checks if a character is a letter or a digit |
| ft_isascii | Checks if a character is within the ASCII range (0-127) |
| ft_isprint | Checks if a character is printable |
| ft_strlen | Returns the length of a string |
| ft_memset | Fills a memory area with a given value |
| ft_bzero | Zeroes out a memory area |
| ft_memcpy | Copies a memory area into another one |
| ft_memmove | Like ft_memcpy, but also safe for overlapping areas |
| ft_strlcpy | Copies a string into a buffer of a given size, safely |
| ft_strlcat | Appends a string to the end of another one, safely |
| ft_toupper | Converts a lowercase letter to uppercase |
| ft_tolower | Converts an uppercase letter to lowercase |
| ft_strchr | Finds the first occurrence of a character in a string |
| ft_strrchr | Finds the last occurrence of a character in a string |
| ft_strncmp | Compares two strings up to n characters |
| ft_memchr | Searches for a byte in a memory area |
| ft_memcmp | Compares two memory areas |
| ft_strnstr | Searches for a substring within the first n characters |
| ft_atoi | Converts a string to an int |
| ft_calloc | Allocates memory and zeroes it out |
| ft_strdup | Creates a copy of a string on the heap |

### Part 2 - extra functions

| Function | What it does |
|---|---|
| ft_substr | Takes a substring out of a string |
| ft_strjoin | Joins two strings and returns a new string |
| ft_strtrim | Removes given characters from the start and end of a string |
| ft_split | Splits a string into pieces using a separator character |
| ft_itoa | Converts an int to a string |
| ft_strmapi | Applies a function to every character of a string and returns a new string |
| ft_striteri | Applies a function to every character of a string in place |
| ft_putchar_fd | Writes a character to a given file descriptor |
| ft_putstr_fd | Writes a string to a given file descriptor |
| ft_putendl_fd | Writes a string followed by \n to a given file descriptor |
| ft_putnbr_fd | Writes an int to a given file descriptor |

### Bonus - linked list

| Function | What it does |
|---|---|
| ft_lstnew | Creates a new list element (node) |
| ft_lstadd_front | Adds an element to the front of a list |
| ft_lstsize | Returns the number of elements in a list |
| ft_lstlast | Returns the last element of a list |
| ft_lstadd_back | Adds an element to the end of a list |
| ft_lstdelone | Deletes a single element along with its content |
| ft_lstclear | Deletes an entire list |
| ft_lstiter | Applies a function to the content of every element of a list |
| ft_lstmap | Applies a function to every element and builds a new list from the results |
-->

## Resources

<!-- TR
Bu projeyi yaparken baktığın klasik kaynaklar:
- man sayfaları (örn: man 3 strlen, man 3 memcpy, man 3 strlcpy, man 3 calloc, man 3 atoi)
- cppreference.com - https://en.cppreference.com/w/c
- w3schools - https://www.w3schools.com/c/
- https://medium.com/@haticesena47/libft-ile-i%C5%9Fletim-sistemi-mimarisini-ke%C5%9Ffetmek-4a92eddf5819
- https://www.geeksforgeeks.org/dsa/singly-linked-list-tutorial/
- https://medium.com/@mcancankaya/linked-list-bd4e3bba0f8
- https://medium.com/@mesutkms99/do-we-need-to-use-basic-c-functions-like-memset-bzero-split-strcpy-calloc-itoa-and-atoi-in-b35f47f2ee1
- https://www.geeksforgeeks.org/c/difference-between-malloc-and-calloc-with-examples/
- https://alperenonal.com/blog/makefile-nedir-nasil-kullanilir
- 42 Norm Dokümantasyonu (norminette)
- https://opensource.com/article/18/8/what-how-makefile

AI kullanımı:
Bu projede yapay zekadan şu konularda yardım aldım: kendi başıma fark edemediğim bazı hataların bulunması, test dosyasının (test_libft.c) yazılması, zamandan kazanmak amacıyla 42 Norm kurallarına (norminette) uygun otomatik formatlama, kodun genel olarak gözden geçirilip bazı düzeltmelerin yapılması, ve proje hakkında sorular sorup daha iyi anlamaya çalışma
-->

<!-- EN
Classic resources consulted while working on this project:
- man pages (e.g. man 3 strlen, man 3 memcpy, man 3 strlcpy, man 3 calloc, man 3 atoi)
- cppreference.com - https://en.cppreference.com/w/c
- w3schools - https://www.w3schools.com/c/
- https://medium.com/@haticesena47/libft-ile-i%C5%9Fletim-sistemi-mimarisini-ke%C5%9Ffetmek-4a92eddf5819
- https://www.geeksforgeeks.org/dsa/singly-linked-list-tutorial/
- https://medium.com/@mcancankaya/linked-list-bd4e3bba0f8
- https://medium.com/@mesutkms99/do-we-need-to-use-basic-c-functions-like-memset-bzero-split-strcpy-calloc-itoa-and-atoi-in-b35f47f2ee1
- https://www.geeksforgeeks.org/c/difference-between-malloc-and-calloc-with-examples/
- https://alperenonal.com/blog/makefile-nedir-nasil-kullanilir
- 42 Norm Dokümantasyonu (norminette)
- https://opensource.com/article/18/8/what-how-makefile

AI usage:
In this project I got help from AI for the following: finding some bugs I couldn't spot on my own, writing the test file (test_libft.c), automatically formatting the code to follow 42 Norm rules (norminette) to save time, reviewing the code in general and making some fixes, and asking questions about the project to understand it better.
-->
