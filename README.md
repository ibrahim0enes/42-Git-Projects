<h1 align="center">42 İstanbul — Piscine & Ana Eğitim</h1>
<p align="center"><i>Kod satırı satırına, sıfırdan.</i></p>
<p align="center">
  42 İstanbul'daki <a href="https://www.42istanbul.com.tr/">C Piscine</a> ve devamındaki <b>Ana Eğitim (Common Core)</b> sürecinde tamamladığım ve üzerinde çalıştığım tüm proje ve alıştırmaların arşivi. Düşük seviye C, bellek yönetimi, kabuk (shell) programlama ve algoritmik düşünme üzerine kurulu.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/language-Shell-4EAA25?style=for-the-badge&logo=gnubash&logoColor=white" alt="Shell" />
  <img src="https://img.shields.io/badge/language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/language-Python-3776AB?style=for-the-badge&logo=python&logoColor=white" alt="Python" />
</p>
<p align="center">
  <img src="https://img.shields.io/badge/school-42%20İstanbul-000000?style=for-the-badge" alt="42 İstanbul" />
  <img src="https://img.shields.io/badge/norm-42%20Norm-informational?style=for-the-badge" alt="42 Norm" />
  <img src="https://img.shields.io/badge/memory-Valgrind%20Checked-orange?style=for-the-badge&logo=gnu&logoColor=white" alt="Valgrind Checked" />
  <img src="https://img.shields.io/badge/license-MIT-green?style=for-the-badge" alt="MIT License" />
</p>
<p align="center">
  <img src="https://img.shields.io/badge/Piscine-Tamamlandı%20✔-brightgreen?style=for-the-badge" alt="Piscine Tamamlandı" />
  <img src="https://img.shields.io/badge/Ana%20Eğitim-Devam%20Ediyor%20🔄-yellow?style=for-the-badge" alt="Ana Eğitim Devam Ediyor" />
</p>

---

## 📑 İçindekiler

- [🧭 Hakkında](#-hakkında)
- [🗂️ Repo Yapısı](#️-repo-yapısı)
- [🏊 Piscine (Havuz Dönemi)](#-piscine-havuz-dönemi)
- [🎓 Ana Eğitim (Common Core)](#-ana-eğitim-common-core)
- [🧪 Test & Moulinette](#-test--moulinette)
- [🗺️ Yol Haritası](#️-yol-haritası)
- [⚙️ Derleme](#️-derleme)
- [📏 Kurallar & Norm](#-kurallar--norm)
- [🏫 42 Hakkında](#-42-hakkında)
- [👤 Yazar](#-yazar)
- [📜 Lisans](#-lisans)

---

## 🧭 Hakkında

Bu repo, 42 İstanbul'daki eğitim yolculuğumun **tamamını** tek çatı altında topluyor:

| Aşama | Açıklama | Durum |
|---|---|---|
| **Piscine (Havuz)** | Haziran 2026'da başladığım, dışarıdan hiçbir kaynağa (çoğu alıştırmada yalnızca `write()`) izin verilmeyen, yoğun tempolu seçme ayı | ✅ Tamamlandı |
| **Ana Eğitim (Common Core)** | 3 Ağustos 2026'da başlayan asıl müfredat; C, Shell'in yanına Python, C++ ve LLM/AI odaklı konuların da eklendiği "yeni sistem" | 🔄 Devam ediyor |

Piscine'de her fonksiyon ilk prensiplerden yazıldı: açıkça yeniden yazılmadıkça hiçbir `libc` string/array yardımcı fonksiyonu kullanılmadı. Ana Eğitim'de ise artık **kendi C kütüphanemi (`libft`)** inşa ediyorum — bu repo, yeni projeler tamamlandıkça büyümeye devam edecek canlı bir arşiv.

## 🗂️ Repo Yapısı

```
42-istanbul-journey/
├── piscine/
│   ├── 01_argv_manipulation/     → komut satırı argümanlarını okuma & dönüştürme
│   ├── 02_recursion_and_math/    → döngü vs. özyineleme, klasik algoritmalar
│   ├── 03_arrays_and_strings/    → dinamik bellek, heap tabanlı veri yapıları
│   └── 04_libft_basics/          → C09: minik bir kütüphane inşa etmenin ilk adımları
└── ana_egitim/
    └── 00_libft/                 → resmi Common Core kütüphane projesi (devam ediyor)
```

> 💡 Yukarıdaki ağaç, projelerin mantıksal gruplandırmasını gösterir — gerçek repo'daki klasör adlarını kendi düzenine göre uyarlayabilirsin.

---

## 🏊 Piscine (Havuz Dönemi)

Piscine sırasında, sınav numarasına göre değil **konu temasına göre** gruplandırdım — böylece alttaki kavramlarda gezinmek daha kolay.

### [01 — Argument Vector Manipulation](./piscine/01_argv_manipulation)

| Alıştırma | Açıklama |
|---|---|
| `ft_print_program_name` | Programın kendi adını yazdırır. |
| `ft_print_params` | Her argümanı ayrı bir satırda yazdırır. |
| `ft_rev_params` | Argümanları ters sırada yazdırır. |
| `ft_sort_params` | Argümanları alfabetik sıralayıp yazdırır. |

### [02 — Recursion & Mathematical Functions](./piscine/02_recursion_and_math)

| Alıştırma | Açıklama |
|---|---|
| `ft_iterative_power` | Döngü tabanlı tam sayı üs alma. |
| `ft_recursive_power` | Özyinelemeli tam sayı üs alma. |
| `ft_iterative_factorial` | Döngü tabanlı faktöriyel. |
| `ft_recursive_factorial` | Özyinelemeli faktöriyel. |
| `ft_fibonacci` | Özyinelemeli Fibonacci dizisi. |
| `ft_sqrt` | Tam kare sayıların tam sayı karekökü. |
| `ft_is_prime` | Asallık testi. |
| `ft_find_next_prime` | `n`'den büyük veya eşit ilk asal sayı. |

### [03 — Arrays, Strings & Dynamic Memory](./piscine/03_arrays_and_strings)

| Alıştırma | Açıklama |
|---|---|
| `ft_ultimate_range` | Bir pointer'ı `[min, max)` aralığındaki tam sayılarla doldurur. |
| `ft_range` | `[min, max)` aralığında yeni tahsis edilmiş bir int dizisi döndürür. |
| `ft_strjoin` | Bir string dizisini ayraçla birleştirir. |
| `ft_convert_base` | Bir sayı stringini rastgele taban sistemleri arasında dönüştürür. |
| `ft_strdup` | Minimal bir `strdup` yeniden implementasyonu. |

### [04 — Building a Personal C Library (Piscine C09)](./piscine/04_libft_basics)

Havuzun son aşamalarında, Ana Eğitim'deki `libft` projesinin habercisi olan ilk mini kütüphaneyi kurdum.

| Bileşen | Açıklama |
|---|---|
| `libft_creator.sh` | `libft.a` arşivini derleyip paketleyen kabuk betiği. |
| `ft_putchar` | Tek bir karakteri `write()` ile ekrana yazar. |
| `ft_putstr` | Bir string'i karakter karakter `write()` ile yazdırır. |
| `ft_swap` | İki tam sayının değerini yer değiştirir. |
| `ft_strlen` | Bir string'in uzunluğunu hesaplar. |
| `ft_strcmp` | İki string'i karşılaştırır. |

> Bu aşamada da tek izinli sistem çağrısı `write()` — hiçbir `libc` string fonksiyonuna izin yok.

Her alıştırma klasörü kendi `README.md` (prototip, açıklama, parametreler, dönüş değeri) ve hızlı derleme kontrolü için bir `Makefile` içerir.

---

## 🎓 Ana Eğitim (Common Core)

3 Ağustos 2026'da başlayan Ana Eğitim'de müfredat genişledi: C ve Shell'in yanına **Python**, **C++** ve **LLM/yapay zekâ odaklı** konular eklendi. Bu bölüm, projeler tamamlandıkça büyüyecek.

### 🧱 `libft` — Kendi C Kütüphanem

Ana Eğitim'in ilk ve temel projesi: standart kütüphane fonksiyonlarının kendi implementasyonlarımı içeren, sonraki tüm projelerde kullanacağım kişisel `libft.a`.

| Bölüm | İçerik | Durum |
|---|---|---|
| **Part 1 — Libc Yeniden İmplementasyonları** | Bellek, string ve dönüştürme yardımcıları (`ft_strlen`, `ft_memcpy`, `ft_atoi` ve benzerleri) | 🔄 |
| **Part 2 — Ek Fonksiyonlar** | `ft_split` ve string/format işleme için ek yardımcı fonksiyonlar | 🔄 |
| **Part 3 — Zorunlu Bağlı Liste (`t_list`)** | Kendi bağlı liste veri yapım ve üzerindeki işlemler (ekleme, silme, dolaşma, `map`/`iter`) | 🔄 |

Kullanılan araçlar:
- **Makefile** — 42 Norm uyumlu, tekrar derlemeleri optimize eden derleme betiği
- **`libft_creator.sh`** → Piscine aşamasından miras kalan, arşiv oluşturma mantığının olgunlaşmış hâli

---

## 🧪 Test & Moulinette

`libft`'i her teslim öncesi resmi moulinette'e benzer şekilde sınamak için kendi test aracımı geliştiriyorum:

- ✅ Subject'teki **her fonksiyon için ayrı test senaryoları** (parça 1, 2 ve zorunlu bağlı liste dahil, toplamda düzinelerce test)
- ✅ **Valgrind entegrasyonu** — bellek sızıntısı ve geçersiz erişim kontrolü her testte otomatik çalışır
- ✅ **Fork ile izole çalıştırma** — bir testteki segfault/crash diğer testleri etkilemez, tüm sonuçlar yine de raporlanır

Bu aracı, başkalarının da kendi `libft`'lerini sınayabilmesi için ayrı, herkese açık bir repo olarak yayınlamayı planlıyorum.

---

## 🗺️ Yol Haritası

Ana Eğitim'in "yeni sistem"i şu dilleri/alanları kapsıyor. Her biri altında yer alan projeler tamamlandıkça bu README'ye eklenecek:

| Alan | Durum |
|---|---|
| 🅲 **C** — `libft` ile başlayan proje zinciri | 🔄 Devam ediyor |
| 🐚 **Shell** | ✅ Piscine'de tamamlandı |
| 🐍 **Python** | 📋 Planlanıyor |
| 🅲➕➕ **C++** | 📋 Planlanıyor |
| 🤖 **LLM / Yapay Zekâ konuları** | 📋 Planlanıyor |

---

## ⚙️ Derleme

Her alıştırma/proje kendi 42 Norm uyumlu bayraklarına karşı bağımsız olarak derlenir:

```bash
cd piscine/02_recursion_and_math/ft_fibonacci
make
```

Ya da herhangi bir dosyayı manuel derlemek için:

```bash
gcc -Wall -Wextra -Werror -c ft_fibonacci.c
```

`libft` için:

```bash
cd ana_egitim/00_libft
make
```

Bu repodaki tüm dosyalar `-Wall -Wextra -Werror` ile uyarısız derlenir.

---

## 📏 Kurallar & Norm

- Kod **42 Norm**'a uyar: girinti için tab, satır başına tek değişken tanımı, fonksiyon başına en fazla 25 satır, koşul içinde atama yasak, `for` döngüsü yasak (yalnızca `while`), katı header formatı.
- Bellek tahsis eden (`malloc`) fonksiyonlar dönüş değerini her zaman kontrol eder ve zarifçe başarısız olur.
- Uç durumlar (negatif girdi, sıfır uzunluklu aralıklar, geçersiz tabanlar, `NULL` pointer'lar) tanımsız davranışa bırakılmak yerine açıkça ele alınır.
- `libft` fonksiyonları Valgrind ile sızıntı ve geçersiz erişime karşı düzenli olarak test edilir.

---

## 🏫 42 Hakkında

[42](https://42.fr/en/homepage/), öğretmeni ve geleneksel dersi olmayan, ücretsiz, proje tabanlı bir bilgisayar bilimleri okulu — öğrenciler akran-akrana (peer-to-peer) işbirliği ve giderek zorlaşan projelerle öğrenir. **Piscine** ("yüzme havuzu"), yeni öğrencilerin asıl müfredata (Ana Eğitim) katılmadan önce geçtiği yoğun seçme ayıdır.

## 👤 Yazar

**İbrahim Enes Çolak**
42 İstanbul Öğrencisi · UE5 Gameplay & AI Geliştiricisi
Paralel olarak İstanbul Aydın Üniversitesi'nde bilgisayar bilimleri eğitimine devam ediyor.

[Portfolyo](https://ibrahimenescolak.com) · [GitHub](https://github.com/ibrahim0enes)

## 📜 Lisans

Bu proje [MIT Lisansı](./LICENSE) ile lisanslanmıştır.
