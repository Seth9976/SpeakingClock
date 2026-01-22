// 函数: sub_40d0d6
// 地址: 0x40d0d6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
int16_t* gsbase
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(gsbase + arg1), arg3.w)
*(gsbase + arg1) = temp0
*arg1 += arg1.b
*arg3 += arg1.b
*arg1 += arg1.b
int32_t entry_ebx
arg1[arg2 + 0x40040] += entry_ebx:1.b
*arg1 += arg1.b
int32_t var_4 = entry_ebx
char* edx
edx.b = arg1.b - 1
int32_t* edx_2

if (arg1.b == 1)
    edx_2 = data_4af920
else
    char temp2_1 = edx.b
    edx.b -= 1
    
    if (temp2_1 == 1)
        edx_2 = data_4af924
    else
        void* edx_1
        edx_1.b = (edx - 1).b - 0x16
        
        if ((edx - 1).b u< 0x16)
            edx_1.b = 1
            edx_2 = sub_40ceb0(*((zx.d(arg1.b) << 3) + &data_4aa934), edx_1, 
                *((zx.d(arg1.b) << 3) + 0x4aa938))
        else
            edx_2 = sub_40d068()

int32_t var_8 = arg2
return sub_40451c(edx_2, edx_2) __tailcall
