// 函数: sub_46d55c
// 地址: 0x46d55c
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
arg1[0xa9] = sub_402e90(0xc)
sub_46cb44(arg1, 0)
arg1[0x14] = 0x800ab
sub_4738d4(arg1, 0)
sub_473910(arg1, 0)
sub_456ec8(arg1, 0x140)
sub_456efc(arg1, 0xf0)
int32_t edx
edx.b = 1
int32_t* eax_6 = sub_43234c(sub_42a369+0x23, edx)
arg1[0xa2] = eax_6
*(esp_1 - 4) = 0x31
(*data_4ac140)()
(*(*eax_6 + 0x40))()
*(esp_1 - 4) = 0x32
(*data_4ac140)()
void* esp_5 = esp_1
(*(*arg1[0xa2] + 0x34))()
void* eax_15 = arg1[0xa2]
*(eax_15 + 0x14) = arg1
*(eax_15 + 0x10) = sub_46e20c
arg1[0x9e].b = 2
int32_t edx_3
edx_3.b = 1
int32_t* eax_16 = sub_42bd40(sub_45171c+0x240, edx_3)
arg1[0xa0] = eax_16
sub_45607c(eax_16, arg1)
arg1[0x9c].b = 7
*(arg1 + 0x271) = 2
*(arg1 + 0x273) = 0
*(arg1 + 0x279) = 3
arg1[0xa3].b = 0
*arg1[0xa9] = *(data_4b1ce4 + 0x40)
int32_t edx_6
edx_6.b = 1
*(arg1[0xa9] + 4) = sub_478864(sub_46b498+0x320, edx_6, arg1)
void* eax_21 = sub_478638(arg1)
*(eax_21 + 0x24) = arg1
*(eax_21 + 0x20) = sub_4786ec
*(arg1[0xa9] + 8) = 0
*(arg1 + 0x27d) = 1
arg1[0x2b] = sub_403b40(arg1)
*(arg1 + 0x329) = 0xff
arg1[0xd5] = 0
sub_46e590(arg1, 0)
sub_4579cc(arg1, 0)
sub_457904(arg1, 0)
sub_45fa64(arg1, 1)
sub_474198(data_4b1ce4, arg1)
arg1[0xd3] = 0xa

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_5
    esp_5 += 0x10

*esp_5
*(esp_5 + 4)
*(esp_5 + 8)
*(esp_5 + 0xc)
return arg1
