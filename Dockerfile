FROM debian:bullseye-slim
LABEL maintainer="PanosGX-Custom-Project"
# when build, download c compiler and c libraries, when done rm temp files
RUN apt-get update && apt-get install -y gcc libc6-dev && rm -rf /var/lib/apt/lists/*
COPY buf_over.c /app/buf_over.c
WORKDIR /app
RUN gcc -o buf_over buf_over.c
CMD ["./buf_over"]