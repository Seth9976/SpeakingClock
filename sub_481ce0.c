// 函数: sub_481ce0
// 地址: 0x481ce0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(arg1 + 0x1c) & 2) == 0)
    int32_t* edi_1 = *(arg1 + 0x254)
    
    if (edi_1 == 0)
        sub_406a30(data_4ac428, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, var_8))
        esp = &var_8
    else
        WPARAM wParam = sub_4819e8(arg1)
        SendMessageA(sub_45f888(edi_1), 0x1333, wParam, zx.d(arg2))
        esp = &ExceptionList

*(arg1 + 0x25a) = arg2
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_481d74
int32_t* result = &var_8
sub_404b88(result)
return result
