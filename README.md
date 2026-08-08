<h1 align="center">42 İstanbul — Piscine & Ana Eğitim</h1>
<p align="center"><i>Kod satırı satırına, sıfırdan.</i></p>
<p align="center">
  42 İstanbul'daki <a href="https://www.42istanbul.com.tr/">Piscine</a> ve devamındaki <b>Ana Eğitim (Common Core)</b> sürecinde tamamladığım tüm proje ve alıştırmaların canlı arşivi. Düşük seviye C, bellek yönetimi, kabuk (shell) programlama ve algoritmik düşünme üzerine kurulu.
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

---

## 📑 İçindekiler

- [🧭 Hakkında](#-hakkında)
- [🧩 Bu Repo Ne İçerir](#-bu-repo-ne-i̇çerir)
- [🛠️ Kazanılan Beceriler](#️-kazanılan-beceriler)
- [🧪 Yaklaşım & Test Disiplini](#-yaklaşım--test-disiplini)
- [⚙️ Derleme](#️-derleme)
- [📏 Kurallar & Norm](#-kurallar--norm)
- [🏫 42 Hakkında](#-42-hakkında)
- [👤 Yazar](#-yazar)
- [📜 Lisans](#-lisans)

---

## 🧭 Hakkında

Bu repo, 42 İstanbul'daki eğitim yolculuğumun tamamını tek çatı altında topluyor: **Piscine** (Haziran 2026'da başladığım, dışarıdan hiçbir kaynağa izin verilmeyen yoğun tempolu seçme ayı) ve onu takip eden **Ana Eğitim / Common Core** (Ağustos 2026'da başlayan, C ve Shell'in yanına Python, C++ ve LLM/yapay zekâ odaklı konuların da eklendiği asıl müfredat).

Bu doküman kasıtlı olarak **genel ve zamana dayanıklı** yazıldı: belirli bir proje, alıştırma veya klasör adı içermez. Amaç, hangi aşamada olursam olayım — ister Piscine'in ilk haftası, ister Ana Eğitim'in ilerleyen bir noktası — bu README'nin güncel kalması ve yeniden yazılmaya ihtiyaç duymamasıdır. Reponun kendi içeriği büyüdükçe, her proje kendi klasöründeki kendi dokümantasyonuyla anlatılır.

## 🧩 Bu Repo Ne İçerir

- **Piscine dönemi çalışmaları** — komut satırı işleme, özyineleme ve matematiksel algoritmalar, dinamik bellek yönetimi ve string manipülasyonu üzerine kurulu, ilk prensiplerden yazılmış alıştırmalar.
- **Ana Eğitim (Common Core) projeleri** — okulun resmi müfredatındaki, giderek artan karmaşıklıkta, akran değerlendirmesiyle (evaluation) teslim edilen projeler.
- Her proje/alıştırma klasörü kendi içinde **kendi `README.md`'sini** (problem tanımı, yaklaşım, kullanım) ve derleme için bir **`Makefile`** barındırır — bu sayede üst seviye doküman, alt seviyedeki detayları tekrar etmek zorunda kalmaz.

## 🛠️ Kazanılan Beceriler

- Düşük seviye **C programlama** ve manuel bellek yönetimi
- **Shell / Unix** temelleri ve kabuk betikleri
- Özyineleme, klasik algoritmalar ve algoritmik düşünme
- Kendi **veri yapılarını ve kütüphane fonksiyonlarını** sıfırdan tasarlama
- Bellek güvenliği odaklı **test ve doğrulama disiplini**
- Genişleyen müfredatla birlikte: **Python**, **C++** ve **LLM/yapay zekâ** odaklı konular

## 🧪 Yaklaşım & Test Disiplini

- Her fonksiyon **ilk prensiplerden** yazılır; açıkça yeniden implemente edilmedikçe hazır `libc` yardımcı fonksiyonları kullanılmaz.
- Bellek tahsis eden her fonksiyon dönüş değerini kontrol eder ve zarifçe başarısız olur; sızıntı ve geçersiz erişim durumları **Valgrind** ile düzenli olarak denetlenir.
- Uç durumlar (negatif/sıfır girdi, geçersiz parametreler, `NULL` pointer'lar) tanımsız davranışa bırakılmak yerine açıkça ele alınır.
- Teslimden önce, resmi değerlendirme (moulinette) mantığına benzer şekilde kendi test araçlarımla fonksiyonları sınarım.

## ⚙️ Derleme

Her proje/alıştırma kendi 42 Norm uyumlu bayraklarına karşı bağımsız olarak derlenir. Genel akış:

```bash
cd <proje-klasörü>
make
```

Ya da herhangi bir dosyayı manuel derlemek için:

```bash
gcc -Wall -Wextra -Werror -c dosya.c
```

Bu repodaki tüm dosyalar `-Wall -Wextra -Werror` ile uyarısız derlenir.

## 📏 Kurallar & Norm

- Kod **42 Norm**'a uyar: girinti için tab, satır başına tek değişken tanımı, fonksiyon başına en fazla 25 satır, koşul içinde atama yasak, `for` döngüsü yasak (yalnızca `while`), katı header formatı.
- Bellek tahsis eden fonksiyonlar dönüş değerini her zaman kontrol eder.
- Uç durumlar açıkça ele alınır, tanımsız davranışa bırakılmaz.

## 🏫 42 Hakkında

[42](https://42.fr/en/homepage/), öğretmeni ve geleneksel dersi olmayan, ücretsiz, proje tabanlı bir bilgisayar bilimleri okulu — öğrenciler akran-akrana (peer-to-peer) işbirliği ve giderek zorlaşan projelerle öğrenir. **Piscine** ("yüzme havuzu"), yeni öğrencilerin asıl müfredata (Ana Eğitim) katılmadan önce geçtiği yoğun seçme ayıdır.

## 👤 Yazar

**İbrahim Enes Çolak**
42 İstanbul Öğrencisi · UE5 Gameplay & AI Geliştiricisi
Paralel olarak İstanbul Aydın Üniversitesi'nde bilgisayar bilimleri eğitimine devam ediyor.

[Portfolyo](https://ibrahimenescolak.com) · [GitHub](https://github.com/ibrahim0enes)

## 📜 Lisans

Bu proje [MIT Lisansı](./LICENSE) ile lisanslanmıştır.
