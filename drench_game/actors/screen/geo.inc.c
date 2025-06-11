#include "src/game/envfx_snow.h"

const GeoLayout screen_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1_mat_override_whomp_ad_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout screen_001_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1_mat_override_wario_ad_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout screen_001_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1_mat_override_hair_ad_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout screen_001_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1_mat_override_late_ad_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout screen_001_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1_mat_override_pickle_ad_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout screen_geo[] = {
	GEO_CULLING_RADIUS(3000),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(600),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(6, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, screen_000_displaylist_001_mesh_layer_1),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, screen_001_switch_opt1),
				GEO_BRANCH(1, screen_001_switch_opt2),
				GEO_BRANCH(1, screen_001_switch_opt3),
				GEO_BRANCH(1, screen_001_switch_opt4),
				GEO_BRANCH(1, screen_001_switch_opt5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
