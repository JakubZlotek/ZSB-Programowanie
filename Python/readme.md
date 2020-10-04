## Uwaga!:
 W języku pytyhon w przeciwienstwie do wiekszosci jezyków musimy pamietać o 2 rzeczach:
  - **Nie stosujemy średników na końcu linjki**
  - **Ułożenie kodu ma znaczenie**
    - *ZŁY KOD:*
      ```python
      x = 5
      if x = 5:
      print("zgadza sie")
      else:
      print("nie zgadza sie")
      ```
    - *DOBRY KOD:*
      ```python
      x = 5
      if x = 5:
        print("zgadza sie")
      else:
        print("nie zgadza sie")
      ```

## Typy zmiennych:

| Typ               | Przykład                                     |
| :----:            |    :---                                      |
| **Tekstowe**      | str                                          |
| **Liczbowe**      | int, float, complex                          |
| **Zakresowe**     | list, tuple, range                           |
| **Mapujące**      | dict                                         |
| **Deklararujące** | set, frozenset                               |
| **Logiczne**      | bool                                         |
| **Binarne**       | bytes, bytearray, memoryview                 |


#### Deklaracja zmiennej:
```cpp
x = "Czarny pies"
y = 231
z = [1,3,5]
```
