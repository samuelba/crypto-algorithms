cmake_minimum_required(VERSION 3.5)
project(crypto_algorithms)

set(common_HDRS
  memset.h
)

add_executable(aes
  aes.c
  aes.h
  aes_test.c
)

add_executable(arcfour
  arcfour.c
  arcfour.h
  arcfour_test.c
)

add_executable(base64
  base64.c
  base64.h
  base64_test.c
)

add_executable(blowfish
  blowfish.c
  blowfish.h
  blowfish_test.c
)

add_executable(des
  des.c
  des.h
  des_test.c
)

add_executable(md2
  md2.c
  md2.h
  md2_test.c
)

add_executable(md5
  md5.c
  md5.h
  md5_test.c
)

add_executable(rot_13
  rot-13.c
  rot-13.h
  rot-13_test.c
)

add_executable(sha1
  sha1.c
  sha1.h
  sha1_test.c
)

add_executable(sha256
  ${common_HDRS}
  sha256.c
  sha256.h
  sha256_test.c
)