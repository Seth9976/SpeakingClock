// 函数: sub_466d48
// 地址: 0x466d48
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_1 = arg1[0xe]
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
arg1[0xf] = ImageList_Create(arg1[0xd], arg1[0xc], 
    *((zx.d(*(arg1 + 0x41)) << 2) + &data_4aba1c) | 0xfe, esi_1, esi_1)

if (sub_466ad8(arg1) == 0)
    sub_406a30(data_4ac310, &var_8)
    int32_t edx_2
    edx_2.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_2, var_8))
    esp = &var_8

int32_t eax_10 = arg1[0x11]

if (eax_10 != 0x1fffffff)
    sub_4673d0(arg1, eax_10)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_466de1
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
