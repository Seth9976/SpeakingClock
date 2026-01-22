// 函数: sub_402dac
// 地址: 0x402dac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* lpAddress_2

for (void* lpAddress_1 = data_4ad708; lpAddress_1 != &data_4ad704; lpAddress_1 = lpAddress_2)
    lpAddress_2 = *(lpAddress_1 + 4)
    VirtualFree(lpAddress_1, 0, MEM_RELEASE)

int32_t i_2 = 0x37
void* eax = &data_4aa044
int32_t i

do
    *(eax + 0x14) = eax
    *(eax + 4) = eax
    *(eax + 8) = 1
    *(eax + 0xc) = 0
    eax += 0x20
    i = i_2
    i_2 -= 1
while (i != 1)
data_4ad704 = &data_4ad704
data_4ad708 = &data_4ad704
int32_t i_3 = 0x400
void* result_1 = &data_4ad7a4
void* result
int32_t i_1

do
    result = result_1
    *result = result
    *(result + 4) = result
    result_1 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
void* lpAddress_3

for (void* lpAddress = data_4af7ac; lpAddress != &data_4af7a8; lpAddress = lpAddress_3)
    lpAddress_3 = *(lpAddress + 4)
    result = VirtualFree(lpAddress, 0, MEM_RELEASE)

data_4af7a8 = &data_4af7a8
data_4af7ac = &data_4af7a8
return result
