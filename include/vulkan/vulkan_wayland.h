#ifndef VULKAN_WAYLAND_H_
#define VULKAN_WAYLAND_H_ 1

/*
** Copyright 2015-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/


#ifdef __cplusplus
extern "C" {
#endif



#define VK_KHR_wayland_surface 1
#define VK_KHR_WAYLAND_SURFACE_SPEC_VERSION 6
#define VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME "VK_KHR_wayland_surface"
typedef VkFlags VkWaylandSurfaceCreateFlagsKHR;
typedef struct VkWaylandSurfaceCreateInfoKHR {
    VkStructureType                   sType;
    const void*                       pNext;
    VkWaylandSurfaceCreateFlagsKHR    flags;
    struct wl_display*                display;
    struct wl_surface*                surface;
} VkWaylandSurfaceCreateInfoKHR;

typedef VkResult (VKAPI_PTR *PFN_vkCreateWaylandSurfaceKHR)(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (VKAPI_PTR *PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateWaylandSurfaceKHR(
    VkInstance                                  instance,
    const VkWaylandSurfaceCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);

VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    VkPhysicalDevice                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    struct wl_display*                          display);
#endif


#define VK_EXT_acquire_wl_display 1
#define VK_EXT_ACQUIRE_WL_DISPLAY_SPEC_VERSION 1
#define VK_EXT_ACQUIRE_WL_DISPLAY_EXTENSION_NAME "VK_EXT_acquire_wl_display"
typedef struct VkWaylandLeaseConnectorEXT {
    struct zwp_drm_lease_connector_v1*    pConnector;
    VkDisplayKHR                          pDisplay;
} VkWaylandLeaseConnectorEXT;

typedef VkResult (VKAPI_PTR *PFN_vkAcquireWaylandDisplayEXT)(VkPhysicalDevice physicalDevice, struct wl_display* display, struct zwp_drm_lease_manager_v1* manager, uint32_t pConnectorCount, VkWaylandLeaseConnectorEXT* pConnectors);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWaylandDisplayEXT(
    VkPhysicalDevice                            physicalDevice,
    struct wl_display*                          display,
    struct zwp_drm_lease_manager_v1*            manager,
    uint32_t                                    pConnectorCount,
    VkWaylandLeaseConnectorEXT*                 pConnectors);
#endif

#ifdef __cplusplus
}
#endif

#endif
