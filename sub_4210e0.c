// 函数: sub_4210e0
// 地址: 0x4210e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_2 = sx.d(*(sub_416064(sub_403ea8(*arg2)) + 8))

if (i_2 s<= 0)
    return (*(*arg2 + 4))()

int32_t eax_7 = sub_402ea8(i_2 * 4)
int32_t __saved_ebp
int32_t* var_24 = &__saved_ebp
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_416268(sub_403ea8(*arg2), eax_7)

if (i_2 - 1 s>= 0)
    int32_t i_1 = i_2
    int32_t edi_1 = 0
    int32_t i
    
    do
        int32_t* ebx_1 = *(eax_7 + (edi_1 << 2))
        
        if (ebx_1 == 0)
            break
        
        if (sub_4162bc(arg2, ebx_1) != 0)
            sub_422230(arg1, arg2, ebx_1)
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_24_1 = 0x421196
return sub_402ec4(eax_7)
