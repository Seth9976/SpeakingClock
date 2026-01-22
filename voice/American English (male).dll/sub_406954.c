// 函数: sub_406954
// 地址: 0x406954
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_c = ebx
void* esi = arg1
void* edi = arg2
uint32_t eax = arg1

if (eax != 0)
    eax = *(eax - 4)

uint32_t edx = arg2

if (edx != 0)
    edx = *(edx - 4)

uint32_t ecx = eax

if (ecx u> edx)
    ecx = edx

bool cond:1 = ecx == ecx

while (true)
    if (ecx != 0)
        char temp0_1 = *esi
        char temp1_1 = *edi
        cond:1 = temp0_1 == temp1_1
        esi += 1
        edi += 1
        ecx -= 1
        
        if (temp0_1 == temp1_1)
            continue
    
    if (cond:1)
        break
    
    ebx.b = *(esi - 1)
    
    if (ebx.b u>= 0x61 && ebx.b u<= 0x7a)
        ebx.b -= 0x20
    
    ebx:1.b = *(edi - 1)
    
    if (ebx:1.b u>= 0x61 && ebx:1.b u<= 0x7a)
        ebx:1.b -= 0x20
    
    cond:1 = ebx.b == ebx:1.b
    
    if (ebx.b != ebx:1.b)
        eax = zx.d(ebx.b)
        edx = zx.d(ebx:1.b)
        break

return eax - edx
