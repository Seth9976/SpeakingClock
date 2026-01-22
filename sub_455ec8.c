// 函数: sub_455ec8
// 地址: 0x455ec8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
void* eax_1 = sub_41a4bc(data_4b1c98)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(eax_1 + 8) - 1

if (eax_4 s>= 0)
    int32_t var_8_1 = eax_4
    
    do
        ebp_1[-3] = sub_41a0f4(ebp_1[-2], ebp_1[-1])
        char eax_8
        eax_8, ebp_1 = sub_42c5ac(ebp_1[-3])
        esp = &esp[5]
        
        if (eax_8 != 0)
            *(esp - 4) = ebp_1
            *(esp - 8) = j_sub_40443c
            *(esp - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp - 0xc
            sub_456048(ebp_1[-3])
            *(esp - 4)
            fsbase->NtTib.ExceptionList = *(esp - 0xc)
            *(esp - 4) = 0x455f45
            return sub_42c608(ebp_1[-3])
        
        ebp_1[-1] -= 1
    while (ebp_1[-1] != 0xffffffff)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_455f6d
return sub_41a520(data_4b1c98)
