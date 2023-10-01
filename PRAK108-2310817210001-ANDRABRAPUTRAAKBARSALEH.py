a = int("5")
b = int("14")
c = float("3.14")
d = b / a
r = d / (2 * c) 
hasil = "{:.2f}".format(r)

print("Diketahui : ")
print("Pak Dengklek mengelilingi taman =", a, "Putaran")
print("Jarak tempuh Pak Dengklek =", b, "Kilometer")

print("jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah", hasil, "Kilometer")