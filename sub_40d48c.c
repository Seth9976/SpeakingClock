// 函数: sub_40d48c
// 地址: 0x40d48c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t var_14 = 0
int32_t* var_8 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_2 = zx.d(sub_40d228(var_8))
int32_t* ebx_1
int32_t edx_2

if (eax_2 - 3 u< 8)
    edx_2.b = 1
    ebx_1 = sub_40ceb0(*((eax_2 << 3) + &data_4aa934), edx_2, *((eax_2 << 3) + 0x4aa938))
else if (eax_2 == 0xb)
    esp = &ExceptionList
    ebx_1 = sub_40d2c0(&var_4)
else if (eax_2 - 0xc u>= 0xa)
    int32_t var_10 = *var_8
    char var_c_1 = 0
    int32_t* var_28_2 = &var_10
    sub_406a30(data_4abfc0, &var_14)
    int32_t edx_5
    edx_5.b = 1
    int32_t* eax_10
    eax_10, ebp_1 = sub_40ceec(sub_407f68+0x28c, edx_5, var_14, 0)
    esp = &var_8
    ebx_1 = eax_10
else
    edx_2.b = 1
    ebx_1 = sub_40ceb0(*((eax_2 << 3) + &data_4aa934), edx_2, *((eax_2 << 3) + 0x4aa938))

if (sub_403df4(ebx_1, 0x40819c) != 0)
    ebx_1[3] = ebp_1[-1]

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_40d54c
sub_404b88(&ebp_1[-4])
return &ebp_1[-4]
