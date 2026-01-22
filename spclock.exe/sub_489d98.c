// 函数: sub_489d98
// 地址: 0x489d98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t** eax_1
int32_t ecx
int32_t* esi_1
eax_1, ecx, esi_1 = sub_489044(arg1, arg2)
int64_t** edx_1
edx_1.b = eax_1.b & 0x10

if (edx_1.b != 0x10)
    edx_1.b = eax_1.b & 0x20
    
    if (edx_1.b != 0x20)
        edx_1.b = eax_1.b & 0x40
        
        if (edx_1.b != 0x40)
            eax_1.b &= 0x80
            
            if (eax_1.b != 0x80)
                arg1[0x18].b = 0
            else
                arg1[0x18].b = 4
        else
            arg1[0x18].b = 3
    else
        arg1[0x18].b = 2
else
    arg1[0x18].b = 1

int32_t eax_3
int32_t ecx_1
int32_t edx_2
eax_3, ecx_1, edx_2 = sub_4888b8(esi_1, edx_1, ecx)
arg1[0x15] = eax_3
int32_t eax_5
int32_t ecx_2
int32_t edx_3
eax_5, ecx_2, edx_3 = sub_4888b8(esi_1, edx_2, ecx_1)
arg1[0x17] = eax_5
int32_t eax_7
int32_t ecx_3
int32_t edx_4
eax_7, ecx_3, edx_4 = sub_4888b8(esi_1, edx_3, ecx_2)
arg1[0x14] = eax_7
char eax_9
int32_t ecx_4
eax_9, ecx_4 = sub_4889a0(esi_1, edx_4, ecx_3)
*(arg1 + 0x7d) = eax_9
return sub_489e1c(arg1, esi_1, ecx_4)
