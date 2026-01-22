// 函数: sub_43bed0
// 地址: 0x43bed0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp_1 = &var_10

if (arg2.b != 0)
    void var_20
    esp_1 = &var_20
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
void* ebp_1 = sub_45a640(arg1, 0)

if (*data_4ac1d0 == 0)
    arg1[0x14] = 0x842b2
else
    arg1[0x14] = 0x842a2

sub_456ec8(arg1, 0x91)
sub_456efc(arg1, 0x19)
sub_45fb58(arg1, 1)
sub_4579cc(arg1, 0)
int32_t edx_1
edx_1.b = 1
int32_t* eax_6 = sub_42bd40(sub_45171c+0x240, edx_1)
arg1[0x94] = eax_6
sub_45607c(eax_6, arg1)
arg1[0xa0] = 0x10
*(esp_1 - 4) = arg1
*(esp_1 - 8) = *(*arg1 + 0x108)
arg1[0xa5] = sub_424a14()
*(esp_1 - 4) = arg1
*(esp_1 - 8) = sub_43c50c
void* esp_7 = esp_1
arg1[0xa7] = sub_424a14()
arg1[0x96] = 8
arg1[0x97] = 0xffffffff
arg1[0xaa] = 0xffffffff

if (*(ebp_1 - 1) != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_7
    esp_7 += 0x10

*esp_7
*(esp_7 + 4)
*(esp_7 + 8)
*(esp_7 + 0xc)
return arg1
