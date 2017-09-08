cmake_minimum_required(VERSION 3.5)
project(crypto_algorithms)

add_executable(sha256
  memset.h
  sha256.c
  sha256.h
  sha256_test.c
)