// 函数: sub_49ef30
// 地址: 0x49ef30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t* var_8 = ecx
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
sub_423334(arg1, 0, ecx)
sub_49ede8()
arg1[0xe] = arg1
*(arg1 + 0xe2) = 1
arg1[0xc].b = 1
arg1[0x11].b = 1
*(arg1 + 0xe1) = 0
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_43234c(sub_42a369+0x23, edx)
arg1[0xd] = eax_1
eax_1[5] = arg1
eax_1[4] = sub_49f28c
sub_403578(&arg1[0x3e], 0x1e8, 0)
arg1[0x3e] = 0x1e8
arg1[0x3f] = *(data_4abe28 + 8)
arg1[0x40] = arg1[0xe]
arg1[0x41] = 7
arg1[0x42] = 0x800
int32_t edx_1
edx_1.b = 1
int32_t* eax_6 = sub_49df50(sub_49dd6c+0x48, edx_1)
arg1[0x31] = eax_6
*(esp_1 - 4) = arg1
*(esp_1 - 8) = sub_49ee80
sub_49e084(eax_6)
int32_t edx_2
edx_2.b = 1
int32_t* eax_8 = sub_49df50(sub_49dd6c+0x48, edx_2)
arg1[0x32] = eax_8
*(esp_1 - 4) = arg1
*(esp_1 - 8) = sub_49ee40
sub_49e084(eax_8)
*(esp_1 - 4) = arg1
*(esp_1 - 8) = sub_49eed8
int32_t edx_3
edx_3.b = 1
void* esp_10 = esp_1
arg1[0x33] = sub_49df98(0x14, edx_3, 0x49ddb4)
arg1[0x36].b = 1
sub_49f5fc(arg1, arg1[0x38].b)

if ((arg1[7].b & 0x10) == 0)
    *(esp_10 - 4) = arg1
    *(esp_10 - 8) = sub_49f294
    sub_476abc(*data_4ac2fc)
    
    if (sub_403df4(arg1[1], &data_453234) != 0)
        sub_49f394(arg1)

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_10
    esp_10 += 0x10

*esp_10
*(esp_10 + 4)
*(esp_10 + 8)
*(esp_10 + 0xc)
return arg1
