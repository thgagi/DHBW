e = @echo
t = @touch #@ für silence

Strümpfe:
	$(t) $@
	$(e) Strümpfe anziehen

Unterhose:
	$(t) $@
	$(e) Unterhose anziehen

Unterhemd:
	$(t) $@ 
	$(e) Unterhose anziehen

Schuhe: Strümpfe
	$(t) $@
	$(e) Schuhe anziehen

Hose: Unterhose
	$(t) $@
	$(e) Hose anziehen 

Hemd: Unterhemd
	$(t) $@
	$(e) Hemd anziehen

Pullover: Hemd
	$(t) $@
	$(e) Pullover anziehen

Handy: Hose
	$(t) $@
	$(e) Handy anziehen

Mantel: Schuhe Handy Pullover
	$(t) $@
	$(e) Hemd anziehe	

Nackt:
	rm Strümpfe Schuhe Unterhose Unterhemd Hemd Hose Handy Pullover Mantel