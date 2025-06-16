# .PHONY: all clean libft libC

# all: libft libC

# libft:
# 	$(MAKE) -C libft

# libC:
# 	$(MAKE) -C libC

# clean:
# 	$(MAKE) -C libft clean
# 	$(MAKE) -C libC clean

# fclean:
# 	$(MAKE) -C libft fclean
# 	$(MAKE) -C libC fclean

# re: fclean all


# Nom des fichiers à fusionner
LIBS := libft/libft.a libC/libC.a
MERGED_LIB := 42libC.a
TMP_DIR := tmp_merge

all: $(MERGED_LIB)

# Étape 1 : Déclare que $(MERGED_LIB) dépend des deux bibliothèques compilées
$(MERGED_LIB): libft/libft.a libC/libC.a
	@echo "==> Fusion de $(LIBS) dans $(MERGED_LIB)"
	@rm -rf $(TMP_DIR)
	@mkdir -p $(TMP_DIR)
	@for lib in $(LIBS); do \
		cp $$lib $(TMP_DIR); \
		(cd $(TMP_DIR) && ar x $$(basename $$lib)); \
		rm $(TMP_DIR)/$$(basename $$lib); \
	done
	@ar rcs $(MERGED_LIB) $(TMP_DIR)/*.o
	@ranlib $(MERGED_LIB)
	@rm -rf $(TMP_DIR)
	@echo "✅ $(MERGED_LIB) créé avec succès"


# Étape 2 : Comment compiler les bibliothèques individuelles
libft/libft.a:
	$(MAKE) -C libft

libC/libC.a:
	$(MAKE) -C libC

clean:
	@rm -rf $(MERGED_LIB) $(TMP_DIR)
	$(MAKE) -C libft clean
	$(MAKE) -C libC clean

fclean: clean
	$(MAKE) -C libft fclean
	$(MAKE) -C libC fclean

re: fclean all

.PHONY: all clean
