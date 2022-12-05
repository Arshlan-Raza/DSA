.PHONY: clean All

All:
	@echo "----------Building project:[ recursionPower - Debug ]----------"
	@cd "recursionPower" && "$(MAKE)" -f  "recursionPower.mk"
clean:
	@echo "----------Cleaning project:[ recursionPower - Debug ]----------"
	@cd "recursionPower" && "$(MAKE)" -f  "recursionPower.mk" clean
