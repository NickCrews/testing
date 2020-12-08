
int main() {
  for(int i = 0; i < 100; ++i) {
    for(int j = 0; j < 100; ++j) {
      if (i * j > 500)
        goto early_exit;
    }
  }

  early_exit:

  return 0;
}
