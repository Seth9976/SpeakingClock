// 函数: sub_406ff8
// 地址: 0x406ff8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

PSTR lpRootPathName = arg1

if (lpRootPathName == 0)
    lpRootPathName = nullptr

uint32_t totalNumberOfClusters
uint32_t numberOfFreeClusters
uint32_t bytesPerSector
uint32_t sectorsPerCluster
BOOL result
int32_t ecx
result, ecx = GetDiskFreeSpaceA(lpRootPathName, &sectorsPerCluster, &bytesPerSector, 
    &numberOfFreeClusters, &totalNumberOfClusters)
int32_t eax_1 = sectorsPerCluster * bytesPerSector
int32_t eax_4
int32_t edx
eax_4, edx = sub_4046c0(ecx, 0, eax_1, numberOfFreeClusters, 0)
*arg2 = eax_4
arg2[1] = edx
int32_t eax_7
int32_t edx_1
eax_7, edx_1 = sub_4046c0(arg2, 0, eax_1, totalNumberOfClusters, 0)
*arg3 = eax_7
arg3[1] = edx_1
return result
