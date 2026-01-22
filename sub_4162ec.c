// 函数: sub_4162ec
// 地址: 0x4162ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* edi_1 = **arg2
int32_t ebx
ebx.b = 4

if (*edi_1 != 7)
    int32_t ecx_1
    ecx_1.b = edi_1[1]
    ebx.b = edi_1[ecx_1 + 2]

int32_t ecx_2 = arg2[1]
char temp0 = *(arg2 + 7)
arg2[4]

if (temp0 u< 0xfe)
    arg1 = ecx_2()
else if (temp0 u> 0xfe)
    int16_t* ecx_6 = (ecx_2 & 0xffffff) + arg1
    arg1.b = *ecx_6
    
    if (ebx.b u>= 2)
        arg1.w = *ecx_6
        
        if (ebx.b u>= 4)
            arg1 = *ecx_6
else
    arg1 = (*(sx.d(ecx_2.w) + *arg1))()

if (ebx.b u< 4)
    if (ebx.b u>= 2)
        arg1 = sx.d(arg1.w)
        
        if (ebx.b != 2)
            return arg1 & 0xffff
    else
        arg1 = sx.d(arg1.b)
        
        if (ebx.b != 0)
            return arg1 & 0xff

return arg1
