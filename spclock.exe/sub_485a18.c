// 函数: sub_485a18
// 地址: 0x485a18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t* esp_1 = &var_c

if (arg2.b != 0)
    void var_1c
    esp_1 = &var_1c
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
void* ebp_1 = sub_45a640(arg1, 0)
*(esp_1 - 4) = 2
sub_456ec8(arg1, GetSystemMetrics())
*(esp_1 - 4) = 0x14
void* esp_5 = esp_1
sub_456efc(arg1, GetSystemMetrics())
int32_t eax_5 = arg1[0x13]
int32_t eax_6 = eax_5 s>> 1
bool c = unimplemented  {sar eax, 0x1}

if (eax_5 s>> 1 s< 0)
    eax_6 = adc.d(eax_6, 0, c)

sub_456efc(arg1, eax_5 + eax_6)
arg1[0x94].b = 1
*(arg1 + 0x267) = 0
arg1[0x99].w = 0
arg1[0x96].w = 0
*(arg1 + 0x25a) = 0x64
arg1[0x97] = 1
arg1[0x9c].b = 1
*(arg1 + 0x271) = 1
*(arg1 + 0x266) = 1
arg1[0x14] &= 0xffffff7f

if (*(ebp_1 - 1) != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_5
    esp_5 += 0x10

*esp_5
*(esp_5 + 4)
*(esp_5 + 8)
return arg1
