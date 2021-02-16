build:
	@mkdir target && cd target && cmake .. && cmake --build .

exec:
	@cd target && ./Renderden/Renderden