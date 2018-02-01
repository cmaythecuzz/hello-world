(function ($) {
  /**
   * Overrides ajax settings() method defined at /misc/ajax.js.
   * Prevents to lose wysiwyg settings between ajax calls.
   * Solves bug with field collections reported here: https://www.drupal.org/node/2243413.
   *
   * @param ajax
   * @param response
   * @param status
   */
  Drupal.ajax.prototype.commands.settings = function (ajax, response, status) {
    if (response.merge) {
      if (typeof response.settings.wysiwyg != 'undefined' && typeof response.settings.wysiwyg.plugins != 'undefined'){
        response.settings.wysiwyg.plugins = Drupal.settings.wysiwyg.plugins;
      }
      $.extend(true, Drupal.settings, response.settings);
    }
    else {
      ajax.settings = response.settings;
    }
  }
})(jQuery);
