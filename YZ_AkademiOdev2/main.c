#include <stdio.h>
void saat(int n) {
  switch (n) {
  case 1:
    printf("one ");
    break;
  case 2:
    printf("two ");
    break;
  case 3:
    printf("three ");
    break;
  case 4:
    printf("four ");
    break;
  case 5:
    printf("five ");
    break;
  case 6:
    printf("six ");
    break;
  case 7:
    printf("seven ");
    break;
  case 8:
    printf("eight ");
    break;
  case 9:
    printf("nine ");
    break;
  case 10:
    printf("ten ");
    break;
  case 11:
    printf("eleven ");
    break;
  case 12:
    printf("twelve ");
    break;
  case 13:
    printf("thirteen ");
    break;
  case 14:
    printf("fourteen ");
    break;
  case 15:
    printf("fifteen ");
    break;
  case 16:
    printf("sixteen ");
    break;
  case 17:
    printf("seventeen ");
    break;
  case 18:
    printf("eightteen ");
    break;
  case 19:
    printf("nineteen ");
    break;
  case 20:
    printf("twenty ");
    break;
  case 21:
    printf("twent-one ");
    break;
  case 22:
    printf("twenty-two ");
    break;
  case 23:
    printf("twenty-three ");
    break;
  case 24:
    printf("twenty-four ");
    break;
  case 25:
    printf("twenty-five ");
    break;
  case 26:
    printf("twenty-six ");
    break;
  case 27:
    printf("twenty-seven ");
    break;
  case 28:
    printf("twenty-eight ");
    break;
  case 29:
    printf("twenty-nine ");
    break;
  }
}

int main(void) {
  int h, m;
  printf("Saat giriþi yapýnýz: ", h);
  scanf("%d", &h);
  if (1 <= h && h <= 24) {
    if (h >= 13) {
      h = h - 12;
      printf("h: %d ", h);
    }
    printf("Dakika giriþi yapýnýz: ", m);
    scanf("%d", &m);
    if (1 <= m && m <= 59) {
      if (m == 0) {
        saat(h);
        printf("o'clock");
      }
      if (m == 1) {
        saat(m);
        printf("minute past ");
        saat(h);
      }
      if (m >= 2 && m < 30) {
        if (m == 15) {
          saat(m);
          printf("quarter past ");
          saat(h);
        } else {
          saat(m);
          printf("minutes past ");
          saat(h);
        }
      }
      if (m == 30) {
        saat(h);
        printf("half past ");
      }
      if (m > 30) {
        if (m == 45) {
          saat(m);
          printf("quarter to ");
          saat(h+1);
        }

        else {
          saat(m);
          printf("minutes to ");
          saat(h);
        }
      }
    } else {
      printf("Lütfen geçerli bir giriþ yapýn!");
    }
  } else {
    printf("Lütfen geçerli bir giriþ yapýn!");
  }
  return 0;
}
