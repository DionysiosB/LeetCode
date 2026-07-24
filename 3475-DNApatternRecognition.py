import pandas as pd

def dnastart(seq): return 1 if seq.startswith("ATG") else 0
def dnastop(seq): return 1 if seq.endswith("TAA") or seq.endswith("TAG") or seq.endswith("TGA") else 0
def dnamotif(seq): return 1 if "ATAT" in seq else 0
def dnarep(seq): return 1 if "GGG" in seq else 0

def analyze_dna_patterns(samples: pd.DataFrame) -> pd.DataFrame:
    samples["has_start"] = samples["dna_sequence"].apply(dnastart)
    samples["has_stop"] = samples["dna_sequence"].apply(dnastop)
    samples["has_atat"] = samples["dna_sequence"].apply(dnamotif)
    samples["has_ggg"] = samples["dna_sequence"].apply(dnarep)
    samples.sort_values(by="sample_id", inplace=True)
    return samples


