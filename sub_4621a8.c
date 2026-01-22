// 函数: sub_4621a8
// 地址: 0x4621a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* esp_1 = &var_1c

if (arg2.b != 0)
    void var_2c
    esp_1 = &var_2c
    arg1 = sub_403fcc(arg3, arg2)

char var_9 = arg2.b
sub_403c38(arg3, 0)
arg1[3] = 4
arg1[5] = arg3
arg1[0x1c] = 0x80000
arg1[6] = 0xc
char eax_6 = *(arg3 + 0x5b)

if (eax_6 == 1 || eax_6 == 2)
    eax_6 = 0
else
    eax_6 = 1

arg1[7].b = eax_6
int32_t* edx_1
edx_1.b = 1
arg1[0x19] = sub_461b1c(&data_453d50, edx_1, arg1)
int32_t* edx_2
edx_2.b = 1
arg1[4] = sub_42ba08(&data_429b1c, edx_2)
sub_432d8c(0, 0xffffff)
sub_42bb84()
sub_46237c(arg1)
esp_1[7] = &var_4
esp_1[6] = j_sub_40443c
TEB* fsbase
esp_1[5] = fsbase->NtTib.ExceptionList
void* esp_5 = &esp_1[5]
fsbase->NtTib.ExceptionList = esp_5
int32_t ebx_3 = sub_45b7f4(arg3) - 1

if (ebx_3 s>= 0)
    int32_t i_1 = ebx_3 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        *(esp_5 - 4) = 0
        int32_t eax_16
        int32_t ecx_1
        eax_16, ecx_1 = sub_45b7b8(arg3, esi_1)
        ecx_1.b = 3
        (*(*arg1 + 0xc))()
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_461d7c(arg1[0x19])
*(esp_5 + 8)
fsbase->NtTib.ExceptionList = *esp_5
*(esp_5 + 8) = sub_4622bc
return sub_462380(arg1)
