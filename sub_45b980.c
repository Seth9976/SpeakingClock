// 函数: sub_45b980
// 地址: 0x45b980
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
int32_t edi
int32_t var_114 = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_118 = &var_4
int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_403578(arg2, 0x8c, 0)
*arg2 = arg1[0x19]
arg2[1] = 0x44000000
sub_45b918(arg1, &arg2[2])

if ((arg1[0x14].b & 1) != 0)
    arg2[1] |= 0x2000000
    arg2[2] |= 0x10000

if ((arg1[7].b & 0x10) == 0)
    esp_1 = &var_8
    
    if ((*(*arg1 + 0x50))() == 0)
        arg2[1] |= 0x8000000

if (arg1[0x76].b != 0)
    arg2[1] |= 0x10000

arg2[3] = arg1[0x10]
arg2[4] = arg1[0x11]
arg2[5] = arg1[0x12]
arg2[6] = arg1[0x13]
int32_t* edi_1 = arg1[0xc]

if (edi_1 == 0)
    arg2[7] = arg1[0x71]
else
    arg2[7] = sub_45f888(edi_1)

arg2[9] = 0xb
arg2[0xa] = DefWindowProcA
*(esp_1 - 4) = 0x7f00
*(esp_1 - 8) = 0
arg2[0xf] = LoadCursorA()
arg2[0x10] = 0
arg2[0xd] = data_4af7f4
char var_108[0x100]
sub_404dec(sub_403b48(*arg1, &var_108), &var_108)
sub_409d0c(&arg2[0x13], var_8)
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_45baa5
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
