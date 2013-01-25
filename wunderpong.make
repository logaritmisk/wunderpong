; Core
api = 2
core = 7.x



; Administration menu
projects[admin_menu][version] = 3.0-rc3


; Chaos tools
projects[ctools][version] = 1.2


; Date
projects[date][version] = 2.6


; Entity Reference
projects[entityreference][download][type] = git
projects[entityreference][download][revision] = b3872c69d923a6558c4ecdeed2e7ef33c46c7524

; Add a delta filter in the Views relationships - http://drupal.org/node/1468862#comment-6449450
projects[entityreference][patch][] = http://drupal.org/files/relationship_delta-1468862-6.patch


; Automatic Entity Labels
projects[auto_entitylabel][version] = 1.1


; Entity API
projects[entity][version] = 1.0


; Panels
projects[panels][version] = 3.3


; Panels everywhere
projects[panels_everywhere][version] = 1.0-rc1


; Views
projects[views][version] = 3.5


; Rules
projects[rules][version] = 2.2


; Features
projects[features][download][type] = git
projects[features][download][revision] = c0b054d4d4f7ca8746764ed823cf79a4aee521b6

; Menu links not set as customized, revert when menu rebuilt - http://drupal.org/node/927576#comment-5095576
projects[features][patch][] = http://drupal.org/files/menu_links_customized-927576-8.patch

; Notice: Array to string conversion in features_export_prepare() (line 190 of features.export.inc) - http://drupal.org/node/1588596
projects[features][patch][] = http://drupal.org/files/1588596-11-features-array_diff_assoc_recursive.patch

; Missing permissions - http://drupal.org/node/1892164
projects[features][patch][] = http://drupal.org/files/use_module_name_as_key_for_permissions-1.patch


; Field group
projects[field_group][download][type] = git
projects[field_group][download][revision] = 9cdde2b96d415538257f11998f28d7e4d50a29ab


; Field permissions
projects[field_permissions][version] = 1.0-beta2


; Token
projects[token][version] = 1.4


; Strongarm
projects[strongarm][version] = 2.0


; Diff
projects[diff][version] = 3.2
