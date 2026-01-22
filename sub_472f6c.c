// 函数: sub_472f6c
// 地址: 0x472f6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int64_t* var_24 = nullptr
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_455cfc()
char eax_2

if (*(arg1 + 0x57) == 0)
    eax_2 = (*(*arg1 + 0x50))()
    void arg_1c
    esp_1 = &arg_1c

if (*(arg1 + 0x57) != 0 || eax_2 == 0 || (arg1[0xd6].b & 8) != 0 || *(arg1 + 0x277) == 1)
    sub_406a30(data_4ac1e4, &var_24)
    int32_t edx_3
    edx_3.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_3, var_24))
    esp_1 = &esp_1[0x15]

if (GetCapture() != 0)
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = 0x1f
    *(esp_1 - 0x10) = GetCapture()
    SendMessageA()

ReleaseCapture()
sub_475774(data_4b1ce0)
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
arg1[0xd6].b |= 8

if (arg1[0xcc].b == 0 && *(data_4b1ce0 + 0xd4) != 0)
    sub_45c168(arg1)
    sub_45f864(arg1)

HWND var_20 = GetActiveWindow()
int32_t var_14 = sub_46b8e0()
sub_41a170(*(data_4b1ce4 + 0x7c), 0, *(data_4b1ce4 + 0x78))
*(data_4b1ce4 + 0x78) = arg1
int16_t var_16 = *(data_4b1ce4 + 0x44)
sub_474614(data_4b1ce4, 0)
int32_t var_1c = *(data_4b1ce4 + 0x48)
int32_t eax_26
void* ebp_1
eax_26, ebp_1 = sub_46ba88(0)
*(ebp_1 - 0xc) = eax_26
*(esp_1 - 0x10) = ebp_1
*(esp_1 - 0x14) = j_sub_40443c
*(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0x18
sub_472e7c(*(ebp_1 - 4))
*(esp_1 - 0x1c) = ebp_1
*(esp_1 - 0x20) = j_sub_40443c
*(esp_1 - 0x24) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0x24
*(esp_1 - 0x28) = 0
*(esp_1 - 0x2c) = 0
*(esp_1 - 0x30) = 0xb000
*(esp_1 - 0x34) = sub_45f888(*(ebp_1 - 4))
SendMessageA()
*(*(ebp_1 - 4) + 0x294) = 0
int32_t i

do
    sub_476a98(data_4b1ce0)
    
    if (*(data_4b1ce0 + 0xa4) != 0)
        *(*(ebp_1 - 4) + 0x294) = 2
    else if (*(*(ebp_1 - 4) + 0x294) != 0)
        sub_472ddc(*(ebp_1 - 4))
    
    i = *(*(ebp_1 - 4) + 0x294)
while (i == 0)

*(ebp_1 - 8) = i
*(esp_1 - 0x28) = 0
*(esp_1 - 0x2c) = 0
*(esp_1 - 0x30) = 0xb001
*(esp_1 - 0x34) = sub_45f888(*(ebp_1 - 4))
SendMessageA()

if (sub_45f888(*(ebp_1 - 4)) != GetActiveWindow())
    *(ebp_1 - 0x1c) = 0

*(esp_1 - 0x1c)
fsbase->NtTib.ExceptionList = *(esp_1 - 0x24)
*(esp_1 - 0x1c) = sub_473185
*(ebp_1 - 4)
return sub_472e74()
