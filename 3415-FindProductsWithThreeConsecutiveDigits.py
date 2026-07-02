import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:

    def threenums(row):
        s = row['name']
        cnt = 0
        for p in range(len(s)):
            if '0' <= s[p] and s[p] <= '9': cnt += 1
            elif cnt == 3: return True
            else: cnt = 0
        return (cnt == 3)


    mask = products.apply(threenums, axis = 1)
    return products[mask]

